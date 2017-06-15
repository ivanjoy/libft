/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:56:28 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 16:11:19 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;
	return (i - 1);
}

char	*ft_strcat(char *s1, const char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		printf("The two inputted strings are %s and %s\n", argv[1], argv[2]);
		char *dst = (char *)(malloc((ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1) * sizeof(dst)));
		printf("New string 'dst' created to hold both strings.\n");
		while (argv[1][i])
		{
			dst[i] = argv[1][i];
			i++;
		}
		dst = ft_strcat(dst, argv[2]);
		printf("Concatenated string: %s\n", dst);
	}
	else
		printf("Please input two strings to be concatenated.\n");
	return (0);
}
