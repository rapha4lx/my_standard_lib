
#include "my_standard_lib.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
