/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:44:38 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/24 17:36:50 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const int	size = 3;
// 	char		arr[size];
// 	int			i;
// 	char		*v;

// 	i = 0;
// 	v = ft_memset(arr, 65, size * sizeof(int));
// 	// v = memset(arr, 65, size * sizeof(int));
// 	while (i < size)
// 	{
// 		printf("%s ", v);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
