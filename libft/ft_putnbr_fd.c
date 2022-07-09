/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:48:48 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 20:12:17 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_put_rec(long c, int fd)
{
	if (c >= 10)
	{
		ft_put_rec(c / 10, fd);
		c = c % 10;
	}
	ft_putchar(c + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	ft_put_rec(num, fd);
}
