/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:49:34 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/25 18:10:25 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power <= 0)
		return (power == 0);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(0, -1));
	return (0);
}
*/
