/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:39:55 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 14:43:46 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;
	size_t	i;

	i = 0;
	buf = malloc(count * size);
	if (buf == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)buf)[i] = 0;
		i++;
	}
	return (buf);
}
/*
int	main(void)
{
	size_t	size;
	size_t	count;

	size = 7;
	count = 7;
	ft_calloc(count, size);
	return (0);
} */
