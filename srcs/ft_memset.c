#include <Kernel/sys/_types/_size_t.h>
#include <stdio.h>
#include <string.h>

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	int	i;

// 	i = 0;
// 	while (i < len)
// 	{
// 		b = (unsigned char)c;
// 		i++;
// 	}
// 	return (b);
// }

int	main(void)
{
	void *b = NULL;
	size_t len = 4;
	int c = 65;
	// printf("%p", ft_memset(b, c, len));
	printf("%p", memset(b, c, len));
	return (0);
}