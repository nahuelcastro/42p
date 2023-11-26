/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:29:34 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/26 13:33:45 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int k, char **args)
{
	int	i;

	i = k - 1;
	if (k > 1)
	{
		while (i > 0)
		{
			ft_putstr(args[i]);
			i--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
