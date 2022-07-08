/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:08:18 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/07 10:45:05 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)dst)[count] = ((const unsigned char *)src)[count];
		count++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(){
    int a[10] = {1,1,1,1,1,1,1,1,1,1};
	int b[10] = {1,1,1,1,1,1,1,1,1,1};
	int src[2] = {0, 43};
	int *c;
	int *d;

    c = ft_memcpy(a, src, sizeof(int) * 2);
	d = memcpy(b, src, sizeof(int) * 2);
	
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

}
*/