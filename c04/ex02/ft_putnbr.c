/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:29:10 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/22 19:38:10 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_rec(int n, char c)
{
	if (n == 0)
	{
		write(1, &c, 1);
		return (0);
	}
	ft_putnbr_rec(n / 10, n % 10 + '0');
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_putnbr_rec(nb / 10, nb % 10 + '0');
}
#include <limits.h>
int	main(void)
{
	int n_min = INT_MIN;
	int n_max = INT_MAX;
	int n_x = -123456789;

	ft_putnbr(n_min);
	write(1, "\n", 1);
	ft_putnbr(n_max);
	write(1, "\n", 1);
	ft_putnbr(n_x);
	return (0);
}
