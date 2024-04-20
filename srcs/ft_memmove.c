#include <Kernel/sys/_types/_size_t.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *destination = (unsigned char *)dst;
	const unsigned char *source = (const unsigned char *)src;

	if (destination < source)
	{
		size_t i = 0;
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else if (destination > source)
	{
		size_t i = len;
		while (i > 0)
		{
			destination[i - 1] = source[i - 1];
			i--;
		}
	}
	return (dst);
}