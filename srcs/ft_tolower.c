int	ft_toupper(int c)
{
	unsigned char a;

	a = c;
	if (a < 65 || a > 90)
		return (a);
	return (a + 32);
}