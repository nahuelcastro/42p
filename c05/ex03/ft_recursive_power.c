/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:11:16 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/25 18:17:36 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (power == 0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_power(3, -1));
	printf("%i\n", ft_recursive_power(3, 0));
	printf("%i\n", ft_recursive_power(3, 5));
	return (0);
}
*/
