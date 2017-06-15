/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:55:40 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:29:16 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *s2;
		printf("Inputted string: %s\n", argv[1]);
		s2 = ft_strdup(argv[1]);
		printf("Duplicated string: %s\n", s2);
	}
	else
		printf("Please input a string to be coppied.");
	return (0);
}
