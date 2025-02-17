
#include "my_standard_lib.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <string.h>
int	main()
{
	char s[] = "ASDHAJHWA";
	char s2[] = "ASDHAJHWA";
	
	bzero(s, 3);
	ft_bzero(s2, 3);

	write(1, s, 9);
	write(1, "\n", 1);
	write(1, s2, 9);
}*/
