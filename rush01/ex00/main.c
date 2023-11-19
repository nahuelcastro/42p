/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:24:23 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/19 22:22:36 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(char *data);

int	main(int quant_args, char *args[])
{
	if (quant_args == 2)
		rush(args[1]);
	else
		write (2, "Error\n", 6);
	return (0);
}
