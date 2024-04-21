#include <Kernel/sys/_types/_size_t.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	i = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "string";
// 	printf("%s\n", ft_substr(str, 5, 6));
// 	return (0);
// }
