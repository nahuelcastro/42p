/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:45:48 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/18 22:29:17 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#define c 0
#define f 1

#define c1_up 0
#define c2_up 2
#define c3_up 4
#define c4_up 6

#define c1_down 8
#define c2_down 10
#define c3_down 12
#define c4_down 14

#define f1_left 16
#define f2_left 18
#define f3_left 20
#define f4_left 22

#define f1_right 24
#define f2_right 26
#define f3_right 28
#define f4_right 30


/*
// ver cuantos tienen todos los anteriores menores
int	 ft_is_valid_line(int view, char *str)
{
	int	i;
	int	j;
	int	view_calculated;
	int	count_partial_max;

	i = 1;
	j = 0;
	count_partial_max = 0;
	view_calculated = 1;
	while (str[i] != '\0')
	{
		while (j < i)
		{
			if (str[i] > str[j])
				count_partial_max += 1;
			j++;
		}
		j = 0;
		if (count_partial_max == i)
			view_calculated++;
		count_partial_max = 0;
		i++;
	}
	return (view_calculated == view);
}

*/
int	ft_is_valid(char *data, int **solution, int col, char *permutations[])
{
	return (1);
	/*
	int valid_dir_1;
	int	valid_dir_2;

	valid_dir_1 = ft_is_valid_line(3, solution[col]); //cambiar el 3 por el obs correspondiente

	if (col == 4)
	{
		//validar las filas

	}
	*/
}


void	parse_data(char *data_parsed[], char *data)
{
	// transform from "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" to [[][]]
}

int rush(char *data)
{
	int	solution[] = {0, 0, 0, 0};
	
	printf("- %d", solution[0]);

	/*data is valid?*/
	
	/*transform data*/

	/*init the backtracking*/
	rush_bt(char *data, )
	
	return(1);
}

void	ft_print_solution()
{
	printf("%s", "en teoria estamos imprimiendo la solucion")
}

int	rush_bt(char *data, int **solution, int col)
{
	int	success;
	int n;
	
	n = 4;
	success = 0;
	if (col > n)
		return (0); // no se encontro solucion

	while (!(solution[col] == n) && !success)
	{
		//try with the next permutation option
		solution[col] += 1;

		//partial solution is valid
		if (ft_is_valid(solution[col])) //falta pasarle el viewers y eso
		{
			if (col != n) //no me cierra esto
				success = rush(data, solution, col);
			else
				success = 1;
		}
	}

	if (success)
		ft_print_solution();

	return success;
	//test validator
	printf("%i",validator(2, "2143"));
}

	/*
	 1. data contiene los 16 numeros separados por espacio
	 2. necesitamos una funcion validator
	 	
	 3. need ft_putchar 
	 4. need ft_generate_cols_permutations(int n) 4 `1234`
	 5. ver algo de filtrar errores
	 * */
