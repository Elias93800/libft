int	isalnum(int i)
{
	if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z' || i >= '0' && i <= '9')
	{
		return (1);
	}
	else
		return (0);
}