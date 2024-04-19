int	ft_isdigit(int c)
{
	char a;

	a = c;
	if (a < 49 || a > 57)
		return (0);
	return (1);
}