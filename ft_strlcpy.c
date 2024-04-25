/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:46:57 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/25 18:39:09 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(src);
	if (dstsize == 0)
		return (length);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

#include <stdio.h>

int	main(void)
{
	char *dst = malloc(10 * sizeof(char)); // Allocate memory for dst
	if (dst == NULL)
	{
		// Handle memory allocation failure
		return (1);
	}
	const char *src = "copy this";
	size_t dstsize = 10;
	printf("%zu", ft_strlcpy(dst, src, dstsize));
	free(dst); // Don't forget to free the allocated memory
	return (0);
}