/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:25:19 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 17:48:55 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_atoi(const char *s)
{
	int i = 0;
	while (*s <= '9' && *s >= '0')
	{
		i *= 10;
		i += (int)*s - 48;
		s++;
	}
	return (i);
}	

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("The two inputted strings are: %s and %s and the inputted integer is: %d.\n", argv[1], argv[2], ft_atoi(argv[3]));
		char *result = ft_strnstr(argv[1], argv[2], ft_atoi(argv[3]));
		if (result)
			printf("The second string was found in the first string at index: %ld.\n", result - argv[1]);
		else
			printf("The second string was not found in the first %d bytes of the first string.\n", ft_atoi(argv[3]));
	}
	else
		printf("Please input two strings and an integer (unsigned).  The funcion is going to search through the first string for the second string, provided it doesn't exceed the integer number of bytes searched.\n");
	return (0);
}
