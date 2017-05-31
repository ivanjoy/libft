/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:35:48 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:53:59 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *s1)
{
	unsigned int i;
	
	i = 0;
	while (s1[i])
		i++;
	return (i - 1);
}

char	*ft_strcpy(char *dst, const char *src);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The inputted string: %s\n", argv[1]);
		char *dst = (char *)(malloc((ft_strlen(argv[1]) + 1) * sizeof(dst)));
		dst = ft_strcpy(dst, argv[1]);
		printf("The newly coppied string: %s\n", dst);
	}
	else
		printf("Please insert a string.\n");
	return (0);
}
