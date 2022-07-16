/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:08:18 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 19:18:40 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	count;

	if (!dst && !src)
		return (NULL);
	count = 0;
	while (count < len)
	{
		((unsigned char *)dst)[count] = ((const unsigned char *)src)[count];
		count++;
	}
	return (dst);
}
