
#include "my_standard_lib.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	while (*(char *)s1 && *(char *)s2
		&& n - 1 > 0 && *(char *)s1 == *(char *)s2)
	{
		n--;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
