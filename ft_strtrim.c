/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:52:40 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 13:16:31 by samcasti         ###   ########.fr       */
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
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	buf = ft_calloc(end - (start - 1) + 1, sizeof(char));
	if (!buf)
		return (NULL);
	while (start <= end)
	{
		buf[i] = s1[start];
		start++;
		i++;
	}
	buf[end + 1] = '\0';
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
