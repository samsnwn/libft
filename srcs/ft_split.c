#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;
	int		j;

	i = 0;
	buffer = (char **)malloc(sizeof(s));
	while (s[i] != '\0')
	{
		j = 0;
		while (s[j] != c)
		{
			buffer[i][j] = s[j];
			j++;
		}
		i++;
	}
	return (buffer);
}

int	main(void)
{
	char **res;
	char const *s = "Split me babe";
	char c = ' ';

	res = ft_split(s, c);

	while (*res)
	{
		printf("%s", *res);
		res++;
	}

	return (0);
}