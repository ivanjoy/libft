/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 18:14:09 by ijoy              #+#    #+#             */
/*   Updated: 2017/07/05 14:21:31 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(const char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
		write(fd, s++, 1);
}
