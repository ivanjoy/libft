/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 14:47:07 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:07:10 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main(int argc, char **argv)
{
	char *str = (char*) malloc(6);
	for (int i = 0; i < 5; i++)
		*(str + i) = 'A';
	*(str + 5) = '\0';
	printf("The initial string is: %s\n", str);
	str = ft_memcpy(str, "lololol", 5);
	printf("The changed string is: %s\n", str);
	return (0);
}
