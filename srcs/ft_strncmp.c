#include <Kernel/sys/_types/_size_t.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int res;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			res = 0;
		else
		{
			res = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (res);
}