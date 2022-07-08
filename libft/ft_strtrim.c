/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:37:51 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 22:03:48 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char s, char *set)
{
	int	idx;

	idx = 0;
	while (set[idx])
	{
		if (set[idx] == s)
			return (1);
		idx++;
	}
	return (0);
}

int	count_set(char const *s1, char const *set)
{
	int	idx1;
	int	count;

	idx1 = 0;
	count = 0;
	while (s1[idx1])
	{
		if (check_set(s1[idx1], (char *)set))
			count++;
		idx1++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		amount;
	int		idx1;
	int		idx2;

	amount = ft_strlen(s1) - count_set(s1, set);
	ret = (char *)malloc(sizeof(char) * amount);
	if (!ret)
		return (NULL);
	idx1 = 0;
	idx2 = 0;
	while (s1[idx1])
	{
		if (!check_set(s1[idx1], (char *)set))
			ret[idx2++] = s1[idx1];
		idx1++;
	}
	ret[idx2] = 0;
	return (ret);
}
