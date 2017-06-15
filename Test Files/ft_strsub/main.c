/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:09:52 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 17:20:27 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

unsigned int	ft_atoi(char const *s)
{
	unsigned int i = 0;

	while (*s && *s >= '0' && *s <= '9')
	{
		i *= 10;
		i += *s - 48;
		s++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		unsigned int i = ft_atoi(argv[2]);
		unsigned int j = ft_atoi(argv[3]);
		printf("The inputted string is: %s\nThe starting index is: %d\nThe number of bytes to take from the string is: %d\n", argv[1], i, j);
		char *result = ft_strsub(argv[1], i, j);
		printf("The resultant substring is: %s\n", result);
	}
	else
		printf("Please input a string and two integers.  The function is going to create a substring from the first string that starts at the index pointed to by the first integer and takes the second integer number of bytes from the string and converts that to a substring, which is then returned.\n");
	return (0);
}
