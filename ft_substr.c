/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:24:22 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 11:18:19 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = ft_calloc(len + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[len + 1] = '\0';
	return (substring);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "string";
// 	printf("%s\n", ft_substr(str, 4, 6));
// 	// free(str);
// 	return (0);
// }
