/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:26:57 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/14 22:30:53 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int	i;
	char *str_init;

	i=0;
	str_init = dest;
	while (*src != '\0')
//	  while(i < 4)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return(dest - i);
}

/*int	main(void)
{
	char	str[4] = "hola";
	char	str_c[4] = "caca";

	char *test;
	test = "aguante la falopa";

	printf("%s", ft_strcpy(str, str_c));
	//ft_strcpy(str, str_c);
	return (0);
}*/

int	main(int k, char **args)
{
	
	if (k == 3)
	{
		printf("%s", ft_strcpy(args[1], args[2]));
	}
	return(0);
}
