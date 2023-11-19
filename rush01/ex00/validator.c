

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

int	ft_is_valid(char *data, char permutations[24][5], int num_permutation, int col)
{
	int valid_dir_1;
	int	valid_dir_2;
	int observation_1;
	int observation_2;

	observation_1 = data[col * 2] - '0';
	observation_2 = data[col * 2 + 8] - '0';
	valid_dir_1 = ft_is_valid_line(observation_1, permutations[num_permutation]);
//	valid_dir_2 = ft_is_valid_line(observation_2, ft_strinvert(permutations[num_permutation]));
}