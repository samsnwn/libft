#include <Kernel/sys/_types/_size_t.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const int size = 10;
// 	int arr[size];
// 	int i = 0;

// 	ft_memset(arr, 5, size * sizeof(int));
// 	// memset(arr, 5, size * sizeof(int));

// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }