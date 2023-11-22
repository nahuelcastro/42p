/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcastr <matcastr@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:02:45 by matcastr          #+#    #+#             */
/*   Updated: 2023/11/21 21:00:28 by matcastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char w1[] = "hovlnvajsha";
	char w2[] = "holcfafdgsjh";
	unsigned int n = 4;

	printf("%d\n", ft_strncmp(w1, w2, n));
	printf("%d\n", strncmp(w1, w2, n));
	return (0);
}
