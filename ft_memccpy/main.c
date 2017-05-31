/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 15:17:31 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:08:35 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++]);
	return (i - 1);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		char	*dst;
		void	*result;
		size_t	n;

		printf("Source String: %s\n", argv[1]);
		printf("Stop Character: %s\n", argv[2]);
		printf("Number of Bytes to Copy: %s\n", argv[3]);
		n = ft_atoi(argv[3]);
		dst = (char *) malloc((ft_strlen(argv[1]) + 1) * sizeof(typeof(dst)));
		dst[ft_strlen(argv[1])] = '\0';
		result = NULL;
		result = ft_memccpy(dst, argv[1], (int)(argv[2][0]), n);
		printf("Destination String: %s \n", dst);
		if (!result)
			printf("Stop Character not found\n");
		else
			printf("Stop Character found.\n");
	}
	else
		printf("Please try again. Entry syntax is: test string, character to search for, and number of characters to copy.\n");
	return (0);
}
