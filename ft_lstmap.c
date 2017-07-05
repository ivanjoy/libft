/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:17:14 by ijoy              #+#    #+#             */
/*   Updated: 2017/07/05 14:17:50 by ijoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*prev;

	list = f(lst);
	prev = list;
	if (list == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		prev->next = f(lst);
		if (prev->next == NULL)
			return (NULL);
		prev = prev->next;
	}
	return (list);
}
