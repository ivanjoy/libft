/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:15:06 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 16:31:28 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_atoi(const char *s1)
{
	unsigned int num = 0;
	int i = 0;

	while (s1[i] >= '0' && s1[i] <= '9')
	{
		num *= 10;
		num += s1[i] - 48;
		i++;
	}
	return (num);
}

unsigned int	ft_strlen(const char *s1)
{
	unsigned int i = 0;

	while (s1[i])
		i++;
	return (i - 1);
}

char	*ft_strncat(char *s1, const char *s2, size_t n);

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		printf("The inputted strings are: %s and %s, and the number of characters to copy from the second string is: %d\n", argv[1], argv[2], ft_atoi(argv[3]));
		char *dst = (char *)(malloc((ft_strlen(argv[1]) + ft_atoi(argv[3]) + 1) * sizeof(dst)));
		while (argv[1][i])
		{
			dst[i] = argv[1][i];
			i++;
		}
		dst = ft_strncat(dst, argv[2], ft_atoi(argv[3]));
		printf("The concatenated strings, with %d characters from the second string: %s\n", ft_atoi(argv[3]), dst);
	}
	else
		printf("Please input two strings and an integer value noting how many characters from the second string you'd like to copy into the frist string.\n");
	return (0);
}
