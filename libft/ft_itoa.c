/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:16:06 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 16:51:54 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(long n)
{
	int	ret;

	ret = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		++ret;
	}
	while (n > 0)
	{
		++ret;
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		amount;
	long	num;

	num = (long)n;
	amount = count_len(num);
	ret = (char *)ft_calloc(amount + 1, sizeof(char));
	if (!ret)
		return (NULL);
	if (num < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	if (num == 0)
		ret[0] = '0';
	while (--amount >= 0 && num > 0)
	{
		ret[amount] = (num % 10) + 48;
		num /= 10;
	}
	return (ret);
}
