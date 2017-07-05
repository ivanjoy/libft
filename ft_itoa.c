/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:06:18 by ijoy              #+#    #+#             */
/*   Updated: 2017/07/05 14:07:24 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strrev(char *str)
{
	char	*result;
	int		i;
	int		f;

	i = 0;
	if (str == NULL)
		return (NULL);
	f = ft_strlen(str);
	result = (char*)malloc((f + 1) * sizeof(char*));
	if (result == NULL)
		return (NULL);
	result[f--] = '\0';
	while (str[i])
		result[f--] = str[i++];
	free(str);
	return (result);
}

static int		ft_countchars(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
		i++;
	else
	{
		while (n > 10)
		{
			i++;
			n /= 10;
		}
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int				i;
	unsigned int	f;
	int				neg;
	char			*buf;

	buf = ft_strnew(ft_countchars(n));
	if (buf == NULL)
		return (NULL);
	f = n;
	if ((neg = n) < 0)
		f = -n;
	i = 0;
	if (f == 0)
		buf[i++] = '0';
	while (f > 0)
	{
		buf[i++] = f % 10 + '0';
		f /= 10;
	}
	if (neg < 0)
		buf[i++] = '-';
	buf[i] = '\0';
	buf = ft_strrev(buf);
	return (buf);
}
