/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:41:12 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 13:20:23 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_ocurrences(char const *s, char c);
void	ft_free(char **buffer);
char	**output(char **buffer, char const *s, char c, int i);
void	allocate(char **buffer, int new_word, int string_length);

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		i;

	i = number_ocurrences(s, c);
	buffer = (char **)malloc(sizeof(char) * (i + 2));
	if (!buffer)
		return (NULL);
	return (output(buffer, s, c, i));
}

char	**output(char **buffer, char const *s, char c, int i)
{
	int	new_word;
	int	string_length;

	new_word = 0;
	string_length = 0;
	while (s[string_length] && new_word < i + 1)
	{
		string_length = 0;
		while (s[string_length] != c && s[string_length])
			string_length++;
		allocate(buffer, new_word, string_length);
		i = 0;
		while (s[i] && s[i] != c)
		{
			buffer[new_word][i] = s[i];
			i++;
		}
		buffer[new_word][string_length] = '\0';
		new_word++;
		s = s + i;
		while (*s == c)
			s++;
	}
	buffer[new_word] = 0;
	return (buffer);
}

void	allocate(char **buffer, int new_word, int string_length)
{
	buffer[new_word] = (char *)malloc(sizeof(char) * (string_length + 1));
	if (!buffer[new_word])
	{
		ft_free(buffer);
		return ;
	}
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

void	ft_free(char **buffer)
{
	char	*str;

	str = *buffer;
	while (*str)
	{
		free(str);
		str++;
	}
}

// int	main(void)
// {
// 	char const	*s;
// 	char		c;
// 	char		**res;
// 	int			i;

// 	s = "Split me babe";
// 	c = ' ';
// 	i = 0;
// 	res = ft_split(s, c);
// 	while (res[i])
// 	{
// 		printf("%s,", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
