/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:53:38 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 16:54:37 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)malloc(size);
	if (string == NULL)
		return (string);
	while (i < size)
	{
		string[i] = '\0';
		i++;
	}
	return (string);
}
