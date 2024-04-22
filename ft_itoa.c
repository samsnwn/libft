/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:44:14 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 18:03:23 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*buf;
	int		int_length;

	int_length = sizeof(n);
	buf = (char *)malloc(sizeof(char) * (int_length + 1));
	if (!buf)
		return (NULL);
	// if (n == -2147483648)
	// {
	// 	;
	// }
	// if (n < 0)
	// {
	// }
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
		return (buf);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(567));
	return (0);
}
