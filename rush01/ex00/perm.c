/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:00:06 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/19 17:21:51 by hmalzac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_store_permutation(char *digits, char perm[24][5], int *index)
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
		perm[*index][0] = a;
		perm[*index][1] = b;
		perm[*index][2] = c;
		perm[*index][3] = d;
		perm[*index][4] = '\0';
		(*index)++;
	}
}

char	*ft_generate_digits(void)
{
	char	*digits;

	digits = (char *)malloc(5);
	digits[0] = '1';
	digits[1] = '1';
	digits[2] = '1';
	digits[3] = '1';
	digits[4] = '\0';
	return (digits);
}

void	ft_get_permutations_loop(char perm[24][5], char *digits)
{
	int	i;

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
					ft_store_permutation(digits, perm, &i);
					digits[3]++;
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

void	ft_get_permutations(char perm[24][5])
{
	char	*digits;

	digits = ft_generate_digits();
	ft_get_permutations_loop(perm, digits);
	free(digits);
}
/*
int	main(void)
{
	char	perm[24][5];
	int	j;

	j = 0;
	ft_get_permutations(perm);

	while (j < 24)
	{
		printf("perm[%d] = %s\n", j, perm[j]);
		j++;
	}
	return (0);
}
*/
