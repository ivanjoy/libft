/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:48:43 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 16:50:35 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(s);
	j = 0;
	result = (char *)malloc(i + 1);
	if (result == NULL)
		return (result);
	result[i] = '\0';
	while (j < i)
	{
		result[j] = f(j, s[j]);
		j++;
	}
	return (result);
}
