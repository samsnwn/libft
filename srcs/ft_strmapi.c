#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (buf == NULL)
		return (NULL);
	while (s[i])
	{
		buf[i] = f(i, s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}