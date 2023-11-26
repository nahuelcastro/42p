/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:06:41 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/22 21:21:44 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len + size);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char w1[20] = "hola";
	char w11[20] = "hola";
	char w2[] = "123456";
	unsigned int n = 4;

	printf("%u\n", ft_strlcat(w1, w2, n));
	printf("%lu\n", strlcat(w11, w2, n));
	return (0);
}
*/
