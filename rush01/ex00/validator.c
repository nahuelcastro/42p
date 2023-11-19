/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:38:17 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/19 18:42:29 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_str_cpy_reverse(char *dest, char *src);

int	ft_is_valid_line(int view, char *str)
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

int ft_are_valid_hor_lines(char *data, char perms[24][5], int *solution)
{
    int valid;
    int line;
    int col;
    char *str_perm;
    char *str_perm_in;
    line = 0;
    valid = 1;
    str_perm = malloc(sizeof(char) * 5);
    str_perm_in = malloc(sizeof(char) * 5);
    while (line < 4)
    {
        col = 0;
        while (col < 4)
        {
            str_perm[col] = perms[solution[col]][line];
            col++;
        }
        str_perm[col] = '\0';
        str_perm_in = ft_str_cpy_reverse(str_perm_in, str_perm);
        valid = valid && ft_is_valid_line(data[line * 2 + 16] - '0', str_perm);
        valid = valid && ft_is_valid_line(data[line * 2 + 24] - '0', str_perm_in);

//        // print the lines and observations
//        printf("line: %d\n", line);
//        printf("data: %d\n", data[line * 2 + 16] - '0');
//        printf("str_perm: %s\n", str_perm);
//        printf("valid: %d\n", valid);
//        printf("\n");

        line++;
    }
    free (str_perm);
    free (str_perm_in);
    return valid;
}

int	ft_is_valid(char *data, char perms[24][5], int *solution, int col)
{
	int	valid_dir_1;
	int	valid_dir_2;
	int	observation_1;
	int	observation_2;
	char *str_inv;
    int num_permutation;

    num_permutation = solution[col];
    str_inv = malloc(sizeof(char) * 5);
    str_inv = ft_str_cpy_reverse(str_inv, perms[num_permutation]);
	observation_1 = data[col * 2] - '0';
	observation_2 = data[col * 2 + 8] - '0';
	valid_dir_1 = ft_is_valid_line(observation_1, perms[num_permutation]);
	valid_dir_2 = ft_is_valid_line(observation_2, str_inv);

    free (str_inv);
    if (valid_dir_1 && valid_dir_2 && col == 3)
        return ft_are_valid_hor_lines(data, perms, solution);

	return (valid_dir_1 && valid_dir_2);
}
