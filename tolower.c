
#include "my_standard_lib.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (97 + (c - 65));
	return (c);
}
