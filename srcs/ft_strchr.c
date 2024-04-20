#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

int	main(void)
{
	char *str = "astring";
	int c = 'r';
	printf("%p\n", ft_strchr(str, c));
	printf("%p\n", strchr(str, c));
	return (0);
}