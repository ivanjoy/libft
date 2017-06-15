/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:34:00 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 15:35:12 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlen(const char *s1)
{
	unsigned int i = 0;

	while (s1[i++]);
	return (i - 1);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int s1size = ft_strlen(argv[1]);
		printf("The first inputted string is: %s and it is %d bytes long.\n", argv[1], s1size);
		unsigned int s2size = ft_strlen(argv[2]);
		printf("The second inputted string is: %s and it is %d bytes long.\n", argv[2], s2size);
		size_t size = s1size + s2size + 1;
		char *dst = (char *) malloc(size * sizeof(dst));
		printf("Made another string of %ld bytes to hold both strings.\n", size);
		int i = 0;
		while (i < s1size)
		{
			dst[i] = argv[1][i];
			i++;
		}
		dst[i] = '\0';
		size_t trunc = ft_strlcat(dst, argv[2], size);
		if (trunc == size)
			printf("The newly created string is: %s.\n", dst);
		else
			printf("Looks like the string was truncated.  The resultant string is: %s.\n", dst);

		printf("\nNext, we're going to test the truncation by reducing the size of the desination string by 2 bytes.\n");
		free(dst);
		size -= 2;
		dst = (char *) malloc((size) * sizeof(dst));
		printf("Now the destination string is only %ld bytes.\n", size);
		i = 0;
		while (i < s1size)
		{
			dst[i] = argv[1][i];
			i++;
		}
		dst[i] = '\0';
		trunc = ft_strlcat(dst, argv[2], size);
		if (trunc == size)
			printf("The newly created string is %s.\n", dst);
		else
			printf("Looks like the new string was truncated.  The resultant string is: %s.\n", dst);
	}
	else
		printf("Please input two strings.\n");
	return (0);
}
