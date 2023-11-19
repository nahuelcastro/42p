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
#include<stdlib.h>
#include<unistd.h>

//#define c1_up 0
//#define c2_up 2
//#define c3_up 4
//#define c4_up 6
//
//#define c1_down 8
//#define c2_down 10
//#define c3_down 12
//#define c4_down 14
//
//#define f1_left 16
//#define f2_left 18
//#define f3_left 20
//#define f4_left 22
//
//#define f1_right 24
//#define f2_right 26
//#define f3_right 28
//#define f4_right 30

void   ft_get_permutations(char tab[24][5]);
int	skyscrapper_bt(char *data, char permutations[24][5], int *solution, int col);
int ft_is_error(char *data);

int rush(char *data)
{
	int	*solution;
    char permutations[24][5];

	solution = (int *)malloc(4 * 4);
	solution[0] = -1;
	solution[1] = -1;
	solution[2] = -1;
	solution[3] = -1;

	/*data is valid?*/
	if (ft_is_error(data))
        return (0);

    // get the permutations
    ft_get_permutations(permutations);

    /*init the backtracking*/
    skyscrapper_bt(data, permutations, solution, 0);

    free(solution);
	return(1);
}
