
#include "my_standard_lib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;
	size_t	sz_src;

	j = ft_strlen(dst);
	k = 0;
	sz_src = ft_strlen((char *)src);
	if (j > size)
		return (sz_src + size);
	if (size == 0)
		return (sz_src);
	while (src[k] && (j + k + 1) < size)
	{
		dst[j + k] = src[k];
		k++;
	}
	dst[j + k] = '\0';
	return (j + sz_src);
}
