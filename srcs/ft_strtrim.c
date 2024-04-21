#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	buf = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (buf == NULL)
		return (NULL);
	while (s1[i] == set[k])
		i++;
	while (s1[i] != '\0')
	{
		buf[j] = s1[i];
		j++;
		i++;
	}
	buf[j] = '\0';
	return (buf);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char const *s = " astrainga ";
	char const *set = " ";
	printf("%s\n", ft_strtrim(s, set));
	return (0);
}