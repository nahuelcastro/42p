/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorbis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:02:37 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/19 18:20:37 by hmalzac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len_str(char *str);

void	display_error(char *message)
{
	write(2, message, ft_len_str(message));
}

int	is_valid_char(char c, int index)
{
	if (index % 2 == 0)
	{
		if (c >= '1' && c <= '4')
			return (1);
		else
		{
			display_error("Error | must be a number between 1 and 4\n");
			return (0);
		}
	}
	else
	{
		if (c == ' ')
			return (1);
		else
		{
			display_error("Error | odd positions must be a space\n");
			return (0);
		}
	}
}

int	is_valid_length(char *data)
{
	if (ft_len_str(data) != 31)
	{
		display_error("Error | input must be 31 characters long\n");
		display_error("   16 numbers and 15 spaces :)\n");
		return (0);
	}
	return (1);
}

int	ft_is_error(char *data)
{
	int	i;

	i = 0;
	if (!is_valid_length(data))
		return (1);
	while (data[i] != '\0')
	{
		if (!is_valid_char(data[i], i))
			return (1);
		i++;
	}
	return (0);
}
