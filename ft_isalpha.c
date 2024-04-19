int	ft_isalpha(int c)
{
	unsigned char a;

	a = c;
	if ((a < 65 || a > 90) && (a < 97 || a > 122))
		return (0);
	return (1);
}