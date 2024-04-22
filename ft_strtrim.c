/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:52:40 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 13:42:43 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	int		i;
	int		end;
	int		start;

	i = 0;
	end = ft_strlen(s1) - 1;
	start = 0;
	buf = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (buf == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	while (i <= end)
	{
		buf[start] = s1[i];
		start++;
		i++;
	}
	buf[end] = '\0';
	return (buf);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char const *s = "astringa";
	char const *set = "a";
	printf("%s\n", ft_strtrim(s, set));
	return (0);
}*/
