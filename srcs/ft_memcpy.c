#include <Kernel/sys/_types/_size_t.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *destination;
	const unsigned char *source;

	i = 0;
	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}