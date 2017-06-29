#include "libft.h"

void	ft_lstfill(t_list **alst, void *content, size_t content_size)
{
	t_list *new;

	if ((new = ft_lstnew(content, content_size)) == NULL)
		return;
	ft_lstadd(alst, new);
}
