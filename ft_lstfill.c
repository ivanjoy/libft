/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:19:13 by ijoy              #+#    #+#             */
/*   Updated: 2017/07/05 14:19:30 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfill(t_list **alst, void *content, size_t content_size)
{
	t_list *new;

	if ((new = ft_lstnew(content, content_size)) == NULL)
		return ;
	ft_lstadd(alst, new);
}
