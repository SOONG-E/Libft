/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:04:53 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 18:15:24 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (str[idx])
	{
		while (str[idx] == c && str[idx])
			idx++;
		if (!str[idx])
			return (count);
		count++;
		while (str[idx] != c && str[idx])
			idx++;
	}
	return (count);
}

static char	*make_str(char *s, int *start, int *end)
{
	char	*ret;
	int		idx;

	idx = 0;
	ret = (char *)ft_calloc(*end - *start + 1, sizeof(char));
	if (!ret)
		return (NULL);
	while (*start < *end)
		ret[idx++] = s[(*start)++];
	*start = *end;
	return (ret);
}

static void	free_child(char **ret, int idx)
{
	while (idx >= 0)
		free(ret[idx--]);
}

static void	find_str(char const *s, char c, int *start, int *end)
{
	while (s[*start] == c && s[*start])
		(*start)++;
	*end = *start;
	while (s[*end] != c && s[*end])
		(*end)++;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		count;
	int		idx;
	int		idx2[2];

	if (!s)
		return (NULL);
	idx = 0;
	idx2[0] = 0;
	count = count_word((char *)s, c);
	ret = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	while (count--)
	{
		find_str(s, c, &idx2[0], &idx2[1]);
		ret[idx] = make_str((char *)s, &idx2[0], &idx2[1]);
		if (!ret[idx])
		{
			free_child(ret, idx);
			return (NULL);
		}
		idx++;
	}
	return (ret);
}
