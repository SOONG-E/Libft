/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:25:01 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 22:11:05 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	amount;
	char			*ret;
	unsigned int	idx;

	amount = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (amount + 1));
	if (!ret)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		ret[idx] = f(idx, s[idx]);
		++idx;
	}
	return (ret);
}
