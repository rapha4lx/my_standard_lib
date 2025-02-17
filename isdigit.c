
int	ft_isdigit(char *s)
{
	int	count;

	count = 0;
	while (s[count])
	{
		if (!((s[count] >= 48 && s[count] <= 57) || s[count] == '-'
				|| s[count] == '+'))
			return (0);
		count++;
	}
	return (1);
}
