/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:44:37 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 16:21:51 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The inputted string is: %s and the character to search for is %c.\n", argv[1], argv[2][0]);
		char *result = strchr(argv[1], (int) argv[2][0]);
		if (result)
			printf("That character was found at index %ld in the string.\n", result - argv[1]);
		else
			printf("The character was not found in that string.\n");
	}
	else
		printf("Please input a string and a character to search that string for the first instance of.\n");
	return (0);
}
