/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:41:12 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 12:41:26 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;
	int		j;

	i = 0;
	buffer = (char **)malloc(sizeof(s));
	while (s[i] != '\0')
	{
		j = 0;
		while (s[j] != c)
		{
			buffer[i][j] = s[j];
			j++;
		}
		i++;
	}
	return (buffer);
}

int	main(void)
{
	char **res;
	char const *s = "Split me babe";
	char c = ' ';
	int i = 0;
	int j;

	res = ft_split(s, c);

	while (res[i])
	{
		j = 0;
		while (res[i][j])
		{
			printf("%s", res[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}
