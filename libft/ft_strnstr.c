/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:15:07 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 18:35:23 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	needlelen;
	char	*ret;

	idx = 0;
	ret = (char *)haystack;
	needlelen = ft_strlen(needle);
	if (needlelen == 0)
		return (ret);
	while (len && len >= needlelen && ret[idx])
	{
		if (ret[idx] == needle[0])
		{
			if (ft_strncmp(&ret[idx], needle, needlelen) == 0)
				return (&ret[idx]);
		}
		idx++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(){
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}*/