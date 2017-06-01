/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:26:05 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 17:47:52 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && i <= len)
	{
		if (*big == *little)
		{
			while (big[j] != '\0' && i + j < len)
			{
				if (big[j] != little[j])
					break ;
				else if (little[j + 1] == '\0')
					return ((char *)big);
				j++;
			}
			j = 0;
		}
		big++;
		i++;
	}
	return (NULL);
}
