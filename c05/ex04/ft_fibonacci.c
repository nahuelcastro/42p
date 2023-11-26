/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:19:30 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/25 18:28:13 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i$\n", ft_fibonacci(-1));
	printf("%i$\n", ft_fibonacci(0));
	printf("%i$\n", ft_fibonacci(1));
	printf("%i$\n", ft_fibonacci(2));
	printf("%i$\n", ft_fibonacci(7));
	return (0);
}
*/
