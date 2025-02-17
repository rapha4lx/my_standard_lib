
#include "my_standard_lib.h"

static size_t	count_word(const char *s, char c)
{
	size_t	i;

	if (!*s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**buff;
	size_t	word_len;
	int		i;

	buff = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!s || !buff)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			buff[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	buff[i] = NULL;
	return (buff);
}
