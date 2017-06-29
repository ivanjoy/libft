#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*prev;

	list = prev = f(lst);
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
