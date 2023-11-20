/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:30:06 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/20 19:54:24 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/

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
/*
int	main(void)
{
	char w1[] = "holnvajsha";
	char w2[] = "holc";
	
	printf("%d\n", ft_strcmp(w1, w2);
	printf("%d\n", strcmp(w1, w2));
	return (0);
}
*/
