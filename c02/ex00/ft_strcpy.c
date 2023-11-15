/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:26:57 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/15 20:15:49 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char dest[7]="holaaa";
	char src[7] = "cumbia";
	
	//src = "ATR perro, cumbia, cajeteala piola gato";
	printf("%s", ft_strcpy(dest, src));
	return(0);
}*/
