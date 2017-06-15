/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 18:45:13 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 19:46:58 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static unsigned int	ft_numwords(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 1;
	j = 0;
	while (*s)
	{
		if (*s != c && i == 1)
		{
			j++;
			i = 0;
		}
		else if (*s == c)
			i = 1;
		s++;
	}
	return (j);
}

static char			*ft_getword(char const *s, char c)
{
	unsigned int	i;
	unsigned int	size;
	char			*word;

	i = 0;
	size = 0;
	while (s[size] != c && s[size])
		size++;
	word = (char *)malloc((size + 1) * sizeof(char));
	if (word == NULL)
		return (word);
	word[size] = '\0';
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

static unsigned int	ft_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**matrix;

	i = ft_numwords(s, c);
	matrix = (char **)malloc((i + 1) * sizeof(char **));
	if (matrix == NULL)
		return (matrix);
	matrix[i] = (char *)malloc(1 * sizeof(char *));
	matrix[i][0] = '\0';
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			matrix[i] = ft_getword(s + j, c);
			if (matrix[i] == NULL)
				return (NULL);
			j += ft_strlen(matrix[i]);
			i++;
		}
		j++;
	}
	return (matrix);
}
