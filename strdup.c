
#include "my_standard_lib.h"

char	*ft_strdup(const char *s)
{
	size_t	sz;
	char	*str;

	sz = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (sz + 1));
	if (str == NULL)
		return (NULL);
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (str - sz);
}
