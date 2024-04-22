/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:45:52 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 12:46:37 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*#include <string.h>

int	main(void)
{
	char *str = "astring";
	int c = 'r';
	printf("%p\n", ft_strchr(str, c));
	printf("%p\n", strchr(str, c));
	return (0);
}*/