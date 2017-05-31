/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:33:54 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:33:58 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len && (*((char*)(src + i)) != '\0'))
	{
		*((char *)(dst + i)) = *((char *)(src + i));
		i++;
	}
	*((char *)(dst + i)) = '\0';
	return (dst);
}
