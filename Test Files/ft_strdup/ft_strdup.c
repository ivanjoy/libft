/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 14:55:30 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/14 19:45:10 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static unsigned int	ft_strlen(const char *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i - 1);
}

char				*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	s2 = (char *)(malloc((ft_strlen(s1) + 1) * sizeof(s2)));
	i = 0;
	if (s2)
	{
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
