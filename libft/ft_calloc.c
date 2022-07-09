/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:46:01 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 21:28:51 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ret;

	ret = (unsigned char *)malloc(count * size);
	if (!ret)
		return (NULL);
	ret = ft_memset(ret, 0, count * size);
	return ((void *)ret);
}
