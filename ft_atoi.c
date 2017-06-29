/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 18:30:04 by ijoy              #+#    #+#             */
/*   Updated: 2017/05/31 18:42:44 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numdigits(const char *str)
{
	int		i;

	i = 0;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		str++;
		i++;
	}
	return (i);
}

int			ft_atoi(const char *str)
{
	long	i;
	int		isneg;

	i = 0;
	isneg = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	if (ft_numdigits(str) >= 11)
		return (isneg - 1);
	if (ft_strcmp("2147483648", str) == 0 && isneg)
		return (-2147483648);
	while (*str != '\0' && ft_isdigit(*str))
		i = i * 10 + (*str++ - '0');
	if (isneg)
		return ((int)-i);
	else
		return ((int)i);
}
