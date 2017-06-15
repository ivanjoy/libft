/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 18:13:07 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 18:25:44 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_atoi(const char *s1)
{
	int i = 0;
	while (*s1 >= '0' && *s1 <= '9')
	{
		i *= 10;
		i += *s1 - 48;
		s1++;
	}
	return (i);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		unsigned int n = ft_atoi(argv[3]);
		printf("The inputted strings are: %s and %s and the number of bytes to check is: %d.\n", argv[1], argv[2], n);
		int result = ft_strncmp(argv[1], argv[2], n);
		if (result != 0)
			printf("The lexicographic difference between the two strings was: %d.\n", result);
		else
			printf("There was no lexicographic difference between the two strings in the first %d bytes.\n", n);
	}
	else
		printf("Input two strings and an integer.  The function is going to lexicographically compare the two strings up to the integer number of bytes.\n");
	return (0);
}
