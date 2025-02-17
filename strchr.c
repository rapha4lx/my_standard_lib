
#include "my_standard_lib.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (*s)
		if ((unsigned char)*s++ == (unsigned char)c)
			return ((char *)--s);
	return (NULL);
}
