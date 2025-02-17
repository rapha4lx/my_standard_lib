
#include "my_standard_lib.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	sz;

	if (s == NULL || f == NULL)
		return ;
	sz = 0;
	while (s[sz])
	{
		(*f)(sz, s + sz);
		sz++;
	}
}
