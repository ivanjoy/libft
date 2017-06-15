/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:32:06 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:32:09 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t i = 0;
	while (str[i++]);
	return (i - 1);
}

void	*ft_memchr(const void *s, int c, size_t n);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Input String: %s\n", argv[1]);
		printf("Character to search for: %s\n", argv[2]);
		char *result;
		result = ft_memchr(argv[1], ((int)(argv[2][0])), ft_strlen(argv[1]));
		if (result)
			printf("Search character found at index: %ld\n", (result - argv[1]));
		else
			printf("Search character not found.");
	}
	return (0);
}
