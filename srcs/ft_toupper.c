int	ft_toupper(int c)
{
	unsigned char a;

	a = c;
	if (a < 97 || a > 122)
		return (a);
	return (a - 32);
}