/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:58:01 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 18:11:31 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The inputted strings are %s, and %s.\n", argv[1], argv[2]);
		int result = ft_strcmp(argv[1], argv[2]);
		if (result != 0)
			printf("The first difference between the first and second strings was %d characters.\n", result);
		else
			printf("Both strings were identical up until the end of the shorter string.\n");
	}
	else
		printf("Please input two strings.  The function is going to compare them and return an integer value noting the difference between the first two non-matching characters.\n");
	return (0);
}
