/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:54:18 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/26 18:19:59 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("0: %i\n", ft_find_next_prime(0));
	printf("1: %i\n", ft_find_next_prime(1));
	printf("2: %i\n", ft_find_next_prime(2));
	printf("3: %i\n", ft_find_next_prime(3));
	printf("4: %i\n", ft_find_next_prime(4));
	printf("5: %i\n", ft_find_next_prime(5));
	printf("6: %i\n", ft_find_next_prime(6));
	printf("7: %i\n", ft_find_next_prime(7));
	return (0);
}
*/
