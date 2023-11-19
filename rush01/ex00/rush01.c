/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:45:48 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/19 23:02:25 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void	ft_get_permutations(char tab[24][5]);
int		skyscrapper_bt(char *data, char perms[24][5], int *solution, int col);
int		ft_is_error(char *data);

int	rush(char *data)
{
	int		*solution;
	char	permutations[24][5];
	int		success;

	solution = (int *)malloc(4 * 4);
	solution[0] = -1;
	solution[1] = -1;
	solution[2] = -1;
	solution[3] = -1;
	if (ft_is_error(data))
		return (0);
	ft_get_permutations(permutations);
	success = skyscrapper_bt(data, permutations, solution, 0);
	if (!success)
		write (1, "Error", 6);
	free(solution);
	return (1);
}
