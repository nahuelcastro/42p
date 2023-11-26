/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:37:53 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/25 16:16:31 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_negative(char *str)
{
	int	i;
	int	minus_counter;
	int	flag_valid_space;

	i = 0;
	minus_counter = 0;
	flag_valid_space = 1;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			if (str[i] == '-')
				minus_counter++;
			flag_valid_space = 0;
		}
		else if (!flag_valid_space && str[i] == ' ')
			break;
		i++;
	}
	return ((minus_counter % 2));
}

int ft_atoi(char *str)
{
	return (is_negative(str));
}

int	main(void)
{
	printf("%i", ft_atoi(" -- 12345789"));
	return (0);
}


/*
 *
 *contar -
 *identificar la palabra/numero valido y pasarlo como subcadena al la funcion que lo pase a int esa subcadena
 *
 * */
