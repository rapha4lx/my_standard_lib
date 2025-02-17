
#include "my_standard_lib.h"

t_list	*ft_lst_by_index(t_list *lst, int index)
{
	int	count;

	count = 0;
	while (count < index)
	{
		lst = lst->next;
		count++;
	}
	return (lst);
}
