
long	ft_atol(const char *nptr)
{
	int		sing;
	long	i;

	sing = 1;
	i = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\f' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sing = -1;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		i = (i * 10) + (*nptr - '0');
		nptr++;
	}
	return (i * sing);
}
