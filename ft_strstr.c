/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:47:03 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 17:21:27 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		if (*big == *little)
		{
			while (big[i] != '\0')
			{
				if (big[i] == little[i] && little[i + 1] == '\0')
					return ((char *)big);
				if (big[i] != little[i])
					break ;
				i++;
			}
			i = 0;
		}
		big++;
	}
	return (NULL);
}
