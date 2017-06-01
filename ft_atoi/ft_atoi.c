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

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		isneg;

	i = 0;
	isneg = 1;
	while (*str == '\f' || *str == '\t' || *str == ' '
	|| *str == '\n' || *str == '\v' || *str == '\r')
		str++;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	if (*str == '-')
	{
		isneg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i += *str - 48;
		str++;
	}
	return (i * isneg);
}
