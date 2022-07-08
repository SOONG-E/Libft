/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:04:53 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 22:04:21 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char *str, char c)
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

char	*make_str(char *s, int start, int end)
{
	char	*ret;
	int		idx;

	idx = 0;
	ret = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	while (start < end)
		ret[idx++] = s[start++];
	ret[idx] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		count;
	int		idx;
	int		startidx;
	int		endidx;

	idx = 0;
	startidx = 0;
	count = count_word((char *)s, c);
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	while (count--)
	{
		while (s[startidx] == c && s[startidx])
			startidx++;
		endidx = startidx;
		while (s[endidx] != c && s[endidx])
			endidx++;
		ret[idx] = make_str((char *)s, startidx, endidx);
		if (!ret[idx])
			return (NULL);
		startidx = endidx;
		idx++;
	}
	ret[idx] = NULL;
	return (ret);
}
