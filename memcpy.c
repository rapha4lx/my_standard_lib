
#include "my_standard_lib.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	count;

	count = 0;
	temp_dest = dest;
	temp_src = (char *)src;
	while (count < n)
	{
		temp_dest[count] = temp_src[count];
		count++;
	}
	return (dest);
}
