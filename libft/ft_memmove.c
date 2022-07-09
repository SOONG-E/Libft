/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:58 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/09 11:59:21 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp;
	size_t			count;

	temp = (unsigned char *)src;
	count = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (count < len)
		{
			((unsigned char *)dst)[count] = temp[count];
			count++;
		}
	}
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = temp[len];
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(){
        char    src[] = "lorem ipsum dolor sit amet";
        char    *dest;

	dest = src + 1;
		printf("%s\n", ft_memmove(dest, src, 8));
		dest = src + 1;
		printf("%s\n", memmove(dest, src, 8));

}

    int a[10] = {1,1,1,1,1,1,1,1,1,1};
	int b[10] = {1,1,1,1,1,1,1,1,1,1};
	int src[2] = {0, 43};
	int *c;
	int *d;

    c = ft_memmove(a, src, sizeof(int) * 2);
	d = memmove(b, src, sizeof(int) * 2);
	
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