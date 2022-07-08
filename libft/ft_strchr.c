/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:08:42 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 18:29:49 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		idx;
	char	*temp;
	char	tempc;

	idx = -1;
	temp = (char *)s;
	tempc = (char)c;
	while (temp[++idx])
	{
		if (temp[idx] == tempc)
			return (&temp[idx]);
	}
	if (temp[idx] == tempc)
		return (&temp[idx]);
	return (NULL);
}
