/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:31:59 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/10 15:32:02 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	void			*result;

	i = 0;
	result = NULL;
	while (i < n)
	{
		if (*((char *)(s + i)) == ((char)(c)))
			return ((void *)(s + i));
		else
			i++;
	}
	return (result);
}
