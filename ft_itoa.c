/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:44:14 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/23 11:10:14 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*buf;
	int		int_length;
	int		i;

	i = 0;
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
	if (n < 10)
	{
		while (i < int_length / 4)
		{
			buf[i] = n + '0';
			i++;
		}
	}
	else if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	return (buf);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(567));
	return (0);
}

/**
 * 1- If number has only one digit, change to char and copy to buffer
 * 2- If number is >= 10, divide by ten until you get only one digit,
	and copy to buffer.
 *
 */