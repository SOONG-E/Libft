/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:54:39 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 18:06:18 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count++] = c;
	}
	return (b);
}

/*
#include <string.h>
#include <stdio.h>
int main(){
    int a[10] = {1,1,1,1,1,1,1,1,1,1};
	int b[10] = {1,1,1,1,1,1,1,1,1,1};
	int *c;
	int *d;

    c = ft_memset(a, 0, sizeof(int) * 2);
	d = memset(b, 0, sizeof(int) * 2);
	
	for (int i = 0; i < 10 ;i++)
    	printf("%d", a[i]);
	printf("\n");
	for (int i = 0; i < 10 ;i++)
    	printf("%d", b[i]);
	printf("\n");
	for (int i = 0; i < 10 ;i++)
    	printf("%d", c[i]);
	printf("\n");
	for (int i = 0; i < 10 ;i++)
    	printf("%d", d[i]);
}*/