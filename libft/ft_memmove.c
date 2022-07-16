/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 19:19:12 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp;
	size_t			count;

	temp = (unsigned char *)src;
	count = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (count < len)
		{
			((unsigned char *)dst)[count] = temp[count];
			count++;
		}
	}
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = temp[len];
	}
	return (dst);
}
