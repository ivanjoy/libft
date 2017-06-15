/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:47:19 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 14:52:47 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The Inputted string is: %s\n", argv[1]);
		unsigned int i = ft_strlen(argv[1]);
		printf("The length of the inputted string is: %d\n", i);
	}
	else
		printf("Please input a string.\n");
	return (0);
}
