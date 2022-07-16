/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:04:27 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 19:27:48 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		idx;

	idx = 0;
	ret = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!ret)
		return (NULL);
	while (s1[idx])
	{
		ret[idx] = s1[idx];
		idx++;
	}
	return (ret);
}
