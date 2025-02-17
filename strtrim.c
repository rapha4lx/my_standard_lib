
#include "my_standard_lib.h"

static int	is_set(char const s1, char const *set)
{
	while (*set)
		if (s1 == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_set(*s1, set))
		s1++;
	end = ft_strlen(s1);
	while (end > 0 && is_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, 0, end));
}
