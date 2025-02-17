
#include "my_standard_lib.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen((const char *)s));
	write(fd, "\n", 1);
}
