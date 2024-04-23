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
#include <stdlib.h>

size_t	ft_strlen(const char *s);

int	number_ocurrences(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		new_word;
	int		letter_count;
	int		char_count;
	char	**buffer;
	int		i;

	i = 0;
	new_word = 0;
	letter_count = 0;
	char_count = number_ocurrences(s, c);
	buffer = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[letter_count] != '\0' && i < char_count + 1)
	{
		letter_count = 0;
		while (s[letter_count] != c)
		{
			buffer[new_word][letter_count] = s[letter_count];
			letter_count++;
		}
		buffer[new_word][letter_count] = '\0';
		new_word++;
		i++;
	}
	return (buffer);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char		**res;
	char const	*s;
	char		c;
	int			i;

	s = "Split me babe";
	c = ' ';
	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("%s, ", res[i]);
		i++;
	}
	return (0);
}
