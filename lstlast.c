
#include "my_standard_lib.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*it;

	if (lst == NULL)
		return (NULL);
	it = lst;
	while (lst != NULL)
	{
		it = lst;
		lst = lst->next;
	}
	return (it);
}
