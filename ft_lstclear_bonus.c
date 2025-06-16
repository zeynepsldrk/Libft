#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *p;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
	*lst = NULL;
}
