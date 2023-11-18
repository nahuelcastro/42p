/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:43:57 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/18 12:22:19 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<string.h>
*/

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_len(src));
}
/*
int	main(void)
{
	char dest[] = "holachau";
	char src[]= "12345678";
	unsigned int n = 8;

	printf("\n-> ft r: %i", ft_strlcpy(dest, src, n));
	printf("\n-> ft w: %s", dest);
	return (0);
}
*/
