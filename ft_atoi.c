int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;

	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] || str[i] >= '0' && str[i] <= '9')
	{
		result = str[i] * 10;
		result == str[i] - '0';
		i++;
	}
	return (result * neg);
}