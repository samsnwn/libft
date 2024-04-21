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
	int i = 0;
	int j;

	res = ft_split(s, c);

	while (res[i])
	{
		j = 0;
		while (res[i][j])
		{
			printf("%s", res[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}