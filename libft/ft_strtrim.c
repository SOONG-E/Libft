/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:37:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 18:18:10 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	check_set(char s, char const *set)
{
	int	idx;

	idx = 0;
	while (set[idx])
	{
		if (set[idx] == s)
			return (1);
		++idx;
	}
	return (0);
}
*/
static int	find_set(char const *s, char const *set, int idx)
{
	if (idx == 0)
	{
		while (ft_strchr(set, s[idx]) && s[idx])
			++idx;
		return (idx);
	}
	else if (idx > 0)
	{
		while (idx >= 0 && ft_strchr(set, s[idx]) && s[idx])
			--idx;
		return (idx);
	}
	else
		return (0);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		idx;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(set) == 0)
		return (ft_strdup((char *)s1));
	start = find_set(s1, set, 0);
	end = find_set(s1, set, ft_strlen(s1) - 1);
	if (start > end)
		return (ft_strdup(""));
	ret = (char *)ft_calloc(end - start + 2, sizeof(char));
	if (!ret)
		return (NULL);
	idx = 0;
	while (start <= end)
		ret[idx++] = s1[start++];
	return (ret);
}
