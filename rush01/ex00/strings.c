/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmalzac <hmalzac@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:50:35 by hmalzac           #+#    #+#             */
/*   Updated: 2023/11/19 18:26:11 by hmalzac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_cpy_reverse(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	i--; // Move back to the last character of the string

	while (i >= 0)
	{
		dest[j] = src[i];
		i--;
		j++;
	}
	dest[j] = '\0'; // Add the null terminator at the end
	return (dest);
}

int	ft_len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
