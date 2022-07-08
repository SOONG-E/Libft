/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:59:31 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/07 11:10:14 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	count;
	size_t	count2;
	size_t	retsize;

	count = ft_strlen(dst);
	count2 = 0;
	retsize = ft_strlen(src);
	if (!dstsize)
		return (retsize);
	if (count >= dstsize)
		return (dstsize + retsize);
	retsize += count;
	dstsize -= (count + 1);
	while (src[count2] && dstsize-- > 0)
		dst[count++] = src[count2++];
	dst[count] = 0;
	return (retsize);
}
