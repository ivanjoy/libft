/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:47:11 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 17:20:19 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *big, const char *little);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The inputted strings are: %s and %s\n", argv[1], argv[2]);
		char *result = ft_strstr(argv[1], argv[2]);
		if (result)
			printf("The target string was found inside the larger string at index: %ld.\n", result - argv[1]);
		else
			printf("The target string was not found in the larger string.\n");
	}
	else
		printf("Please input two strings.  The function will search the first string for the contents of the second string.\n");
	return (0);
}
