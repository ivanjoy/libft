/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:08:03 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/13 17:22:08 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (result);
	while (s[i + start] && i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
