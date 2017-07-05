/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:18:41 by ijoy              #+#    #+#             */
/*   Updated: 2017/07/05 14:18:44 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char		*ft_strfindnext(const char *s, char c, int next)
{
	if (next)
		while (*s != '\0' && *s == c)
			s++;
	else
		while (*s != '\0' && *s != c)
			s++;
	return (s);
}

static int				ft_strcountsplits(const char *s, char sep)
{
	int			i;

	i = 0;
	while (*s != '\0')
	{
		s = ft_strfindnext(s, sep, 1);
		if (*s != '\0')
		{
			i++;
			s = ft_strfindnext(s, sep, 0);
		}
	}
	return (i + 1);
}

static char				**ft_tabledel(char **ret, int n)
{
	int			i;

	i = 0;
	while (i < n)
		free(ret[i]);
	free(ret);
	return (NULL);
}

char					**ft_strsplit(char const *str, char c)
{
	char		**ret;
	int			i;
	const char	*next;

	if (str == NULL)
		return (NULL);
	ret = (char**)malloc(ft_strcountsplits(str, c) * sizeof(char*));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		str = ft_strfindnext(str, c, 1);
		if (*str != '\0')
		{
			next = ft_strfindnext(str, c, 0);
			ret[i] = ft_strsub(str, 0, next - str);
			if (ret[i] == NULL)
				return (ft_tabledel(ret, i));
			i++;
			str = next;
		}
	}
	ret[i] = NULL;
	return (ret);
}
