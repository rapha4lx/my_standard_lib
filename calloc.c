
#include "my_standard_lib.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;

	if (nmemb != 0 && size != 0)
		if ((nmemb * size) / size != nmemb)
			return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}
