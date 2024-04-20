#include <Kernel/sys/_types/_size_t.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void *buf;
	size_t i;

	i = 0;
	buf = malloc(count * size);
	if (buf == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)buf)[i] = 0;
		i++;
	}
	return (buf);
}