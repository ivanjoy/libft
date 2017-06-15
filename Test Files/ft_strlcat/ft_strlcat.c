/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:33:58 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 15:39:07 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static unsigned int	ft_strlen(const char *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstsize;

	i = 0;
	j = 0;
	dstsize = ft_strlen(dst);
	while (i != size && dst[i])
		i++;
	if (i == size)
		return (size);
	while (i + j < size - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dstsize + ft_strlen(src) + 1);
}
