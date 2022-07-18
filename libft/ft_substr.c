/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:11:29 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/16 15:36:45 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	idx1;
	size_t	idx2;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	idx1 = start;
	idx2 = 0;
	while (s[idx1] && len--)
		ret[idx2++] = s[idx1++];
	ret[idx2] = 0;
	return (ret);
}
