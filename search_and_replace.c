
#include "my_standard_lib.h"

void	ft_search_and_replace(char *str, const char search, const char replace)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)search)
			str[i] = replace;
		i++;
	}
}
