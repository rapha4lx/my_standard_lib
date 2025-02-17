
#include "my_standard_lib.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	return (last);
}
