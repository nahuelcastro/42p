/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:38:35 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/22 17:52:14 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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

	printf("%s\n", ft_strncat(w1, w2, n));
	printf("%s\n", strncat(w11, w2, n));
	return (0);
}
*/
