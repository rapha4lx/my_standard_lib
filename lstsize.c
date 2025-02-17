
#include "my_standard_lib.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*it;
	int		i;

	if (lst == NULL)
		return (0);
	i = 0;
	it = lst;
	while (it != NULL)
	{
		i++;
		it = it->next;
	}
	return (i);
}
