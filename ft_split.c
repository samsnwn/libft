/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:41:12 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/23 17:20:35 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *s);
int		number_ocurrences(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		new_word;
	int		string_length;
	int		char_count;
	char	**buffer;
	int		i;
	int		j;

	i = 0;
	new_word = 0;
	string_length = 0;
	char_count = number_ocurrences(s, c);
	buffer = (char **)malloc(sizeof(char) * (char_count + 2));
	while (s[string_length] && i < char_count + 1)
	{
		string_length = 0;
		while (s[string_length] != c && s[string_length])
			string_length++;
		buffer[new_word] = (char *)malloc(sizeof(char) * (string_length + 1));
		j = 0;
		while (s[j] && s[j] != c)
		{
			buffer[new_word][j] = s[j];
			j++;
		}
		buffer[new_word][string_length] = '\0';
		new_word++;
		i++;
		s += j;
		while (*s == c)
			s++;
	}
	buffer[new_word] = 0;
	return (buffer);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	number_ocurrences(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char const	*s;
	char		c;
	char		**res;
	int			i;

	s = "Split me babe";
	c = ' ';
	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("%s", res[i]);
		i++;
	}
	return (0);
}
