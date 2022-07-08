/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:20:48 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 18:30:30 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		idx;
	char	*last;
	char	*temp;
	char	tempc;

	idx = -1;
	last = NULL;
	temp = (char *)s;
	tempc = (char)c;
	while (temp[++idx])
	{
		if (temp[idx] == tempc)
			last = &temp[idx];
	}
	if (temp[idx] == tempc)
		last = &temp[idx];
	return (last);
}
