/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:15:07 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/11 16:33:24 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	needlelen;

	if (*needle == 0)
		return ((char *)haystack);
	idx = 0;
	needlelen = ft_strlen(needle);
	while (len > idx && haystack[idx])
	{
		if (haystack[idx] == needle[0] && len >= needlelen + idx)
		{
			if (ft_strncmp(&haystack[idx], needle, needlelen) == 0)
				return ((char *)&haystack[idx]);
		}
		idx++;
	}
	return (NULL);
}
