/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:31:47 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/15 21:57:19 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char *s;

	s = "fjhafjkfaGASDASGADS";
	if (ft_str_is_alpha(s) == 1)
		printf("%c", 'Y');
	return (0);
}*/
