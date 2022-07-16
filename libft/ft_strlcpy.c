/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:51:07 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 19:30:18 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (!dstsize)
		return (srcsize);
	idx = 0;
	while (src[idx] && idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = 0;
	return (srcsize);
}
