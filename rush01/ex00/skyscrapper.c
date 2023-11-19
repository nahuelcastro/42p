/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:06:28 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/19 17:06:45 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void   ft_putchar(char c);
int    ft_is_error(char *data);
int    ft_is_valid(char *data, char perms[24][5], int *solution, int col);
int ft_are_valid_hor_lines(char *data, char perms[24][5], int *solution);

void	ft_print_solution(char permutations[24][5], int *solution)
{
	int	col;
	int index_str;

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
    printf("%s", "solution:::::");
    printf("%d,", solution[0]);
    printf("%d,", solution[1]);
    printf("%d,", solution[2]);
    printf("%d", solution[3]);
}

int	skyscrapper_bt(char *data, char permutations[24][5], int *solution, int col)
{
	int	success;
	int n;

	n = 4;
	success = 0;
	if (col >= n) //TODO verlo
		return (0); // no se encontro solucion

	while (solution[col] < 24 && !success)
	{
		//try with the next permutation option
		solution[col] = solution[col] + 1;

		//partial solution is valid
		if (ft_is_valid(data, permutations, solution, col)) //falta pasarle el viewers y eso
		{
			if (col + 1 ==  n)
            {
                success = 1;
                ft_print_solution(permutations, solution);
            }
            else {
                success = skyscrapper_bt(data, permutations, solution, col + 1);
            }
		}
	}

	return success;
}

//int skyscrapper_bt(char *data, char permutations[24][5], int *solution, int col)
//{
//    int success;
//    int n;
//
//    n = 4;
//    success = 0;
//    if (col >= n)
//        return (0); // no se encontro solucion
//
//    while (solution[col] < 24 && !success)
//    {
//        // try with the next permutation option
//        solution[col]++;
//
//        // partial solution is valid
//        if (ft_is_valid(data, permutations, solution, col))
//        {
//            if (col + 1 == n)
//            {
//                // check if all columns are valid together
//                success = ft_are_valid_hor_lines(data, permutations, solution);
//                if (success)
//                    ft_print_solution(permutations, solution);
//            }
//            else
//            {
//                success = skyscrapper_bt(data, permutations, solution, col + 1);
//            }
//        }
//    }
//
//    return success;
//}
