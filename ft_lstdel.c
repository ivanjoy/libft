#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *temp;
	t_list *list;

	if (alst == NULL)
		return;
	list = *alst;
	while (list != NULL)
	{
		temp = list->next;
		ft_lstdelone(&list, del);
		list = temp;
	}
	*alst = NULL;
}
