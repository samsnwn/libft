#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int	s_length;
	int	i;

	s_length = ft_strlen((char *)s);
	i = s_length - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char *str = "stringsing";
	int c = 's';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
	return (0);
}