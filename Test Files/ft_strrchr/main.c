/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:23:28 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 16:40:36 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Inputted string is: %s, and the character to search for is: %c.\n", argv[1], argv[2][0]);
		char *result = ft_strrchr(argv[1], (int) argv[2][0]);
		if (result)
			printf("The characters was last found at index %ld in the string.\n", result - argv[1]);
		else
			printf("The character was not found in the string.");
	}
	else
		printf("Please input a string and a character to search for the last instance of.\n");
	return (0);
}
