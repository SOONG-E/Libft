/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:33:54 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 18:25:28 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;
	char	*temp;
	char	tempc;

	idx = 0;
	temp = (char *)s;
	tempc = (char)c;
	while (idx < n)
	{
		if (temp[idx] == tempc)
			return (&temp[idx]);
		idx++;
	}
	return (NULL);
}
