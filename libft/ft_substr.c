/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:11:29 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 19:20:01 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	idx1;
	size_t	idx2;

	ret = (char *)malloc((len - start + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	idx1 = start;
	idx2 = 0;
	while (s[idx1] && len--)
		ret[idx2++] = s[idx1++];
	return (ret);
}
