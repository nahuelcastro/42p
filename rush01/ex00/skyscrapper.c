/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:06:28 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/19 22:31:42 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
int		ft_is_error(char *data);
int		ft_is_valid(char *data, char perms[24][5], int *solution, int col);
int		ft_are_valid_hor_lines(char *data, char perms[24][5], int *solution);

void	ft_print_solution(char permutations[24][5], int *solution)
{
	int	col;
	int	index_str;

	index_str = 0;
	while (index_str < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(permutations[solution[col]][index_str]);
			ft_putchar(' ');
			col++;
		}
		index_str++;
		ft_putchar('\n');
	}
}

int	skyscrapper_bt(char *data, char permutations[24][5], int *solution, int col)
{
	int	success;
	int	n;

	n = 4;
	success = 0;
	if (col >= n)
		return (1);
	solution[col] = -1;
	while (solution[col] < 23 && !success)
	{
		solution[col]++;
		if (ft_is_valid(data, permutations, solution, col))
		{
			success = skyscrapper_bt(data, permutations, solution, col + 1);
		}
	}
	if (!success)
		solution[col] = -1;
	else if (col == 0)
		ft_print_solution(permutations, solution);
	return (success);
}
