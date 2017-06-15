/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:44:25 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 17:07:51 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strchr(const char *s, int c)
{
	int		f;
	char	*result;

	f = 0;
	result = NULL;
	while (s[f])
	{
		if (s[f] == (char)c)
		{
			result = (char*)s + f;
			break ;
		}
		f++;
	}
	if (s[f] == (char)c)
		result = ((char*)s + f);
	return (result);
}
