/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:46:16 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 16:51:39 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	j = 0;
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (str);
	str[i] = '\0';
	while (j < i)
	{
		str[j] = f(s[j]);
		j++;
	}
	return (str);
}
