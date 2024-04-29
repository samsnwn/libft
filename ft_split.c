/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:41:12 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 14:17:08 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words_count(char const *s, char c);
void	ft_free(char **buffer, int count);
char	**output(char **buffer, char const *s, char c, int i);
void	allocate_free(char **buffer, int new_word, int string_length,
			int word_count);

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		word_count;

	word_count = words_count(s, c);
	buffer = (char **)malloc(sizeof(char) * (word_count + 1));
	if (!buffer)
		return (NULL);
	return (output(buffer, s, c, word_count));
}

char	**output(char **buffer, char const *s, char c, int word_count)
{
	int	new_word;
	int	i;

	new_word = 0;
	i = 0;
	while (s[i] && new_word < word_count + 1)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		allocate_free(buffer, new_word, i, word_count);
		word_count = 0;
		while (s[word_count] && s[word_count] != c)
		{
			buffer[new_word][word_count] = s[word_count];
			word_count++;
		}
		buffer[new_word][i] = '\0';
		new_word++;
		s = s + word_count;
		while (*s == c)
			s++;
	}
	buffer[new_word] = 0;
	return (buffer);
}

void	allocate_free(char **buffer, int new_word, int string_length,
		int word_count)
{
	buffer[new_word] = (char *)malloc(sizeof(char) * (string_length + 1));
	if (!buffer[new_word])
		ft_free(buffer, word_count);
}

int	words_count(char const *s, char c)
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

void	ft_free(char **buffer, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(buffer[i]);
		i++;
	}
	free(buffer);
}

#include <stdio.h>

int	main(void)
{
	char const	*s;
	char		c;
	char		**res;
	int			i;

	s = "Splitxmexbabe";
	c = 'x';
	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("%s,", res[i]);
		i++;
	}
	return (0);
}
