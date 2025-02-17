
#include "my_standard_lib.h"

int	ft_putstr(char *s)
{
	return (write(1, s, ft_strlen(s)));
}
