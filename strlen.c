
#include "my_standard_lib.h"

size_t	ft_strlen(const char *str)
{
	size_t	size;

	size = 0;
	if (str == NULL)
		return (size);
	while (str[size] != '\0')
		size++;
	return (size);
}
/*
#include <string.h>
int	main()
{
	printf("%ld\n", ft_strlen("asdk\nkwki"));
	printf("%ld\n", strlen("asdk\nkwki"));
}*/
