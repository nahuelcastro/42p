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

int	ft_is_valid(char *data, char perms[24][5], int num_permutation, int col)
{
	int	valid_dir_1;
	int	valid_dir_2;
	int	observation_1;
	int	observation_2;

	observation_1 = data[col * 2] - '0';
	observation_2 = data[col * 2 + 8] - '0';
	valid_dir_1 = ft_is_valid_line(observation_1, perms[num_permutation]);
	return (valid_dir_1);
}
