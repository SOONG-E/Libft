/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:16:06 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 22:09:37 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	ret;

	ret = 0;
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

	amount = count_len(n);
	ret = (char *)malloc(sizeof(char) * (amount + 1));
	if (!ret)
		return (NULL);
	ret[amount] = 0;
	while (--amount >= 0)
	{
		ret[amount] = n % 10;
		n /= 10;
	}
	return (ret);
}
