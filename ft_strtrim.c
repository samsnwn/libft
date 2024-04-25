/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:52:40 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/25 13:08:58 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*buf;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	buf = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (!buf)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	while (start <= end)
	{
		buf[i] = s1[start];
		start++;
		i++;
	}
	buf[end] = '\0';
	return (buf);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s;
// 	char const	*set;

// 	s = "ababaaaMy name is Simonbbaaabba";
// 	set = "ab";
// 	printf("%s\n", ft_strtrim(s, set));
// 	return (0);
// }
