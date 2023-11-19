/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:00:06 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/19 11:03:00 by hmalzac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_store_comb(char *digits, char tab[24][5], int *index)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = digits[0];
	b = digits[1];
	c = digits[2];
	d = digits[3];
	if (a != b && a != c && a != d && b != c && b != d && c != d)
	{
		tab[*index][0] = a;
		tab[*index][1] = b;
		tab[*index][2] = c;
		tab[*index][3] = d;
		tab[*index][4] = '\0';
		(*index)++;
	}
}

char *ft_generate_digits()
{
    char	*digits;

    digits = (char *)malloc(5);
    digits[0] = '1';
    digits[1] = '1';
    digits[2] = '1';
    digits[3] = '1';
    digits[4] = '\0';
}

void	ft_print_comb(char tab[24][5])
{
	int	i;
    char	*digits;

    digits = ft_generate_digits();
	i = 0;
	while (digits[0] <= '4')
	{
		digits[1] = '1';
		while (digits[1] <= '4')
		{
			digits[2] = '1';
			while (digits[2] <= '4')
			{
				digits[3] = '1';
				while (digits[3] <= '4')
				{
					ft_store_comb(digits, tab, &i);
					digits[3]++;
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
/*
int	main(void)
{
	char	tab[24][5];
	int	j;

	j = 0;
	ft_print_comb(tab);
	while (j < 24)
	{
		printf("tab[%d] = %s\n", j, tab[j]);
		j++;
	}
	return (0);
}
+/