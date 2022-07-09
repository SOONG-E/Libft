/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:33:54 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 17:25:57 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*temp;
	unsigned char	tempc;

	idx = 0;
	temp = (unsigned char *)s;
	tempc = (unsigned char)c;
	while (idx < n)
	{
		if (temp[idx] == tempc)
			return (&temp[idx]);
		idx++;
	}
	return (NULL);
}
