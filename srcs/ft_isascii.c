int	ft_isascii(int c)
{
	unsigned char a;

	a = c;
	if (a < 0 || a > 127)
		return (0);
	return (1);
}