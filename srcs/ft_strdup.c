#include <Kernel/sys/_types/_size_t.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s1);
	buf = (char *)malloc(sizeof(char) * (length + 1));
	if (buf == NULL)
		return (NULL);
	while (i < length)
	{
		buf[i] = s1[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}