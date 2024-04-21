#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int	res;

	// char *buf;
	// buf = (char *)malloc(sizeof(char) * ())
	res = 0;
	while (n > 9)
	{
		res = res + (n % 10);
	}
	return (res + '0');
}

int	main(void)
{
	printf("%s\n", ft_itoa(567));
	return (0);
}