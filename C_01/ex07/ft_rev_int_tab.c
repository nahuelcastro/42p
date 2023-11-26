/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:19:23 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/14 19:31:24 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = aux;
		i++;
	}
}

/*
int	main(void)
{
	int test[3] = {1,2,3};
	ft_rev_int_tab(test, 3);
	printf("%d", test[0]);
	printf("%d", test[1]);
	printf("%d", test[2]);
	return(0);
}*/
