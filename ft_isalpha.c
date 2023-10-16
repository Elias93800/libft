int	ft_isalpha(int i)
{
	if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}