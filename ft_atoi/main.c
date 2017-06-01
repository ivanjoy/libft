/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 18:30:11 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 18:52:14 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_atoi(const char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The inputted integer is: %s\n", argv[1]);
		int	result = ft_atoi(argv[1]);
		printf("The number %d is now stored in an integer variable.\n", result);
	}
	else
		printf("Input an integer.  The function will translate the number from a string to an integer.\n");
	return (0);
}
