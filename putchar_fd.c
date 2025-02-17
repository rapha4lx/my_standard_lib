
#include "my_standard_lib.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
