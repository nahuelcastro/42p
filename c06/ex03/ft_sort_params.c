/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:02:16 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/29 20:14:27 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_sort_params(int k, char **args)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	while (i < k)
	{
		j = 1;
		while (j < k - 1)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
			{
				aux = args[j];
				args[j] = args[j + 1];
				args[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int k, char **args)
{
	int	i;

	i = 1;
	if (k > 1)
	{
		ft_sort_params(k, args);
		while (i < k)
		{
			ft_putstr(args[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
