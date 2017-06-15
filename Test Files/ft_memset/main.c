/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 10:39:04 by ijoy              #+#    #+#             */
/*   Updated: 2017/03/08 14:05:02 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(int argc, char **argv)
{
	char *str = (char*)malloc(6);
	int i = 0;
	while (i < 5)
		str[i++] = 'A';
	str[5] = '\0';
	printf("The initial string is: %s\n", str);
	ft_memset(str, 66, 5);
	printf("The changed string is: %s\n", str);
	return (0);
}
