
#include "my_standard_lib.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*it;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		it = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = it;
	}
}
