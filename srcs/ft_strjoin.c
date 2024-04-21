#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	j = 0;
	buf = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (buf == NULL)
		return (NULL);
	while (s1[i])
	{
		buf[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		buf[i] = s2[j];
		i++;
		j++;
	}
	buf[i] = '\0';
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

// int	main(void)
// {
// 	char *s1 = "This, ";
// 	char *s2 = "That.";

// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }