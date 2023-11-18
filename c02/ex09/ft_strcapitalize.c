/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:24:08 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/18 13:02:47 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
*/

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag_cap;
	char	c;

	i = 0;
	flag_cap = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (i == 0 && c >= 'a' && c <= 'z')
			flag_cap = 1;
		if (c >= 'a' && c <= 'z' && flag_cap)
		{
			str[i] = str[i] - 32;
			flag_cap = 0;
		}
		else if (c >= ' ' && c <= '/')
			flag_cap = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			flag_cap = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char s[] = "sALut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(s));
	return (0);
}
*/
