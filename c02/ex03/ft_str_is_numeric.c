/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:59:43 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/15 22:06:09 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= '0' && c <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*s;

	s = "456456115356465454";
	if (ft_str_is_numeric(s))
		printf("%c", 'Y');
	return (0);
}*/
