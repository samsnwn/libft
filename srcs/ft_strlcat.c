#include <Kernel/sys/_types/_size_t.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	space_left;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	space_left = dstsize - i - 1;
	if (space_left == 0 || i == dstsize)
		return (i + ft_strlen(src));
	while (src[j] != '\0' && j < space_left)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}