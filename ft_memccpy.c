/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 15:17:17 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:09:47 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*temp;

	i = 0;
	temp = NULL;
	while (i < n)
	{
		*((unsigned char*)(dst + i)) = *((unsigned char*)(src + i));
		temp = (unsigned char*)(src + i);
		if (*temp == (unsigned char)(c))
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
