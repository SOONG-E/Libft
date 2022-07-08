/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:40:40 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 22:09:28 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	idx;
	int	ret;
	int	sign;

	idx = 0;
	ret = 0;
	sign = 1;
	while ((9 <= str[idx] && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (48 <= str[idx] && str[idx] <= 57)
	{
		ret = ret * 10 + (str[idx] - 48);
		idx++;
	}
	return (sign * ret);
}
