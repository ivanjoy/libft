/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 14:09:53 by ijoy              #+#    #+#             */
/*   Updated: 2017/03/08 14:44:50 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int		main()
{
	char *str = (char*)malloc(6);
	for(int i = 0; i < 5; i++)
		str[i] = 'A';
	printf("The initial string is: %s\n", str);
	ft_bzero(str, 5);
	printf("The changed string is: %s\n", str);
	return (0);
}
