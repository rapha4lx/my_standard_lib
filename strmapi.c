
#include "my_standard_lib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buff;
	size_t	sz;

	sz = ft_strlen((char *)s);
	buff = (char *)ft_calloc(sizeof(char), (sz + 1));
	if (buff == NULL)
		return (NULL);
	while (sz-- > 0)
		buff[sz] = (*f)(sz, s[sz]);
	return (buff);
}
