
void   ft_putchar(char c);
int    ft_is_error(char *data);
int    ft_is_valid(char *data, char permutations[24][5], int permutation, int col);

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
		solution[col]++;

		//partial solution is valid
		if (ft_is_valid(data, permutations, solution[col], col)) //falta pasarle el viewers y eso
		{
			if (col + 1 ==  n)
            {
                success = 1;
                ft_print_solution(permutations, solution);
            }
            else
                success = skyscrapper_bt(data, permutations, solution, col + 1);
		}
	}

	return success;
}