/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:40:40 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 19:55:16 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	idx;
	long long	ret;
	int			s;

	idx = 0;
	ret = 0;
	s = 1;
	while ((9 <= str[idx] && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			s = -1;
		idx++;
	}
	while (48 <= str[idx] && str[idx] <= 57)
	{
		if ((size_t)(-LONG_MIN) < (size_t)(ret * 10 + str[idx] - 48) && s == -1)
			return (0);
		if ((size_t)(ret * 10 + str[idx] - 48) > LONG_MAX && s == 1)
			return (-1);
		ret = ret * 10 + (str[idx] - 48);
		idx++;
	}
	return ((int)(s * ret));
}
