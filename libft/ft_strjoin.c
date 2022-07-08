/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:20:18 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 21:57:36 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		amount;
	char	*ret;
	int		idx1;
	int		idx2;

	amount = ft_strlen(s1) + ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * (amount + 1));
	if (!ret)
		return (NULL);
	idx1 = 0;
	idx2 = 0;
	while (s1[idx1])
		ret[idx2++] = s1[idx1++];
	idx1 = 0;
	while (s2[idx2])
		ret[idx2++] = s2[idx1++];
	ret[idx2] = 0;
	return (ret);
}
