/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:59:31 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/26 21:01:50 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	j;
	int	mid;

	i = 1;
	j = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= j)
	{
		mid = (j + i) / 2;
		if (mid > 46340 || mid * mid > nb)
			j = mid - 1;
		else if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			i = mid + 1;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(-1));
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(2));
	printf("%i\n", ft_sqrt(3));
	printf("%i\n", ft_sqrt(4));
	printf("100: %i\n", ft_sqrt(100));
	printf("%i\n", ft_sqrt(2147395600));
	printf("%i\n", ft_sqrt(2147483647));
	return (0);
}
*/
