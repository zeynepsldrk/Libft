#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		p = ft_lstnew(f(lst-> content));
		if (!p)
		{
			while (new)
			{
				p = new-> next;
				del(new-> content);
				free(new);
				new = p;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new, p);
		lst = lst->next;
	}
	return (new);
}