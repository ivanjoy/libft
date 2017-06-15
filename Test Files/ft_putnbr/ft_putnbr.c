/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 17:48:25 by ijoy              #+#    #+#             */
/*   Updated: 2017/06/14 18:05:37 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int n)
{
	int		i;

	i = n;
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		i = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		i = -n;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}
