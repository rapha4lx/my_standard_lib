
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("ft: %d\n", ft_isalpha('a'));
	printf("ft: %d\n", ft_isalpha('2'));
	printf("ofc: %d\n", isalpha('a'));
	printf("ofc: %d\n", isalpha('2'));

}*/
