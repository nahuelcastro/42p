/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:00:06 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/18 20:57:24 by hmalzac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(char tab[24][5])
{
	char	a;
	char	b;
	char	c;
	char	d;
	int	i = 0;

	a = '1';
	while (a <= '4')
	{
		b = '1';
		while (b <= '4')
		{
			c = '1';
			while (c <= '4')
			{
				d = '1';
				while (d <= '4')
				{
					if(a != b && a != c && a != d && b != c && b != d && c != d)
					{
					
					tab[i][0] = a;
                    tab[i][1] = b;
                    tab[i][2] = c;
                    tab[i][3] = d;
                    tab[i][4] = '\0';
					i++;
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	char tab[24][5];
	int j = 0;

    ft_print_comb(tab);
	
	while(j < 24)
	{
		printf("tab[%d] = %s\n", j, tab[j]);
		j++;
	}
    return 0;
}
