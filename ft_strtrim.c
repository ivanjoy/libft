/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:44:44 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 18:22:48 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static unsigned int	ft_trimmedsize(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	f;

	i = 0;
	j = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			j++;
		else if (f == 0)
		{
			f++;
			j = 0;
		}
		else
		{
			f += j + 1;
			j = 0;
		}
		i++;
	}
	return (f);
}

char				*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	size;
	char			*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	size = ft_trimmedsize(s);
	result = (char *)malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (result);
	result[size] = '\0';
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (i < size && s[i])
	{
		result[i] = s[i];
		i++;
	}
	return (result);
}
