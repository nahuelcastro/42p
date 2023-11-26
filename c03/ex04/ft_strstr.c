/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:07 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/22 21:04:57 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char w1[20] = "holaamigo";
	char w2[] = "ami";

	printf("%s\n", ft_strstr(w1, w2));
	printf("%s\n", strstr(w1, w2));
	return (0);
}
*/
