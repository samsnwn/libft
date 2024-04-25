/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:39:10 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/24 18:56:40 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

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

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	n;

// 	s1 = "ones";
// 	s2 = "ones";
// 	n = 5;
// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }
