int	ft_isprint(int c)
{
	unsigned char a;

	a = c;
	if (a < 32 || a > 126)
		return (0);
	return (1);
}