/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:24:26 by yujelee           #+#    #+#             */
/*   Updated: 2022/07/08 16:10:20 by yujelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	if (!n)
		return (0);
	idx = 0;
	while (s1[idx] == s2[idx] && --n)
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

/*
#include <stdio.h>
#include <string.h>
int main(){
	//char *i = "Abclnm";
	char *i = "test\200";
	//char *j = "abCde";
	char *j = "test\0";
	char *k = "abc";
	char *q = "Hello, World!";
	char *w = "HELLO";


	
//	printf("%d real strcmp = %d\n", ft_strncmp(i, i, 3), strncmp(i, i, 3));
	printf("%d real strcmp = %d\n", ft_strncmp(q, w, 0), strncmp(q, w, 0));
	printf("@@@%d real strcmp = %d\n", ft_strncmp(i, j, 6), strncmp(i, j, 6));
	printf("%d real strcmp = %d\n", ft_strncmp(i, j, 4), strncmp(i, j, 4));
	printf("%d real strcmp = %d\n", ft_strncmp(i, j, 5), strncmp(i, j, 5));
	printf("%d real strcmp = %d\n", ft_strncmp(j, i, 3), strncmp(j, i, 3));
	printf("%d real strcmp = %d\n", ft_strncmp(j, i, 4), strncmp(j, i, 4));
	printf("%d real strcmp = %d\n", ft_strncmp(j, k, 1), strncmp(j, k, 1));
	printf("%d real strcmp = %d\n", ft_strncmp(k, k, 1), strncmp(k, k, 1));

}*/