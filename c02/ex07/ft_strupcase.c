/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:57:58 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/16 18:14:13 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strupcase(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char s[] = "dfasada";

	printf("%s", ft_strupcase(s));
	return (0);
}
*/
