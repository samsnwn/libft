#include <Kernel/sys/_types/_size_t.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t length;

	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	length = 0;
	while (src[length] != '\0')
		length++;
	return (length);
}