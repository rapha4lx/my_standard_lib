
#include "my_standard_lib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (tmp_dest <= tmp_src || tmp_dest > (tmp_src + n))
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
		dest = (void *)tmp_dest;
	}
	else
	{
		while (n--)
			tmp_dest[n] = tmp_src[n];
		dest = (void *)tmp_dest;
	}
	return (dest);
}
