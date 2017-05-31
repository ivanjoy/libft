/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:31:27 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 14:45:07 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *s1)
{
	unsigned int i = 0;
	while (s1[i++]);
	return (i - 1);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int i = ft_strlen(argv[1]);
		printf("The inputted strings are: %s and %s.\n", argv[1], argv[2]);
		printf("We are searching for differences across %d characters.\n", i);
		int		result = ft_memcmp(argv[1], argv[2], i);
		if (result == 0)
			printf("The inputted strings were identical up to the length of the first string.\n");
		else
			printf("The difference between the first differing bytes in the strings is: %d.\n", result);
	}
	else
		printf("Please input two strings.  The program will test the difference between them up to the length of the first string.\n");
	return (0);
}
