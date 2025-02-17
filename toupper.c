
#include "my_standard_lib.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return ((c - 97) + 65);
	return (c);
}
