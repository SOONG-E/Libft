/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:14:45 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 16:49:31 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*temp1;
	unsigned char	*temp2;

	if (!n)
		return (0);
	idx = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (temp1[idx] == temp2[idx] && --n)
		idx++;
	return ((unsigned char)temp1[idx] - (unsigned char)temp2[idx]);
}
