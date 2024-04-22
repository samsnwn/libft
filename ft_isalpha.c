/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:49:15 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 12:57:56 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	a;

	a = c;
	if ((a < 65 || a > 90) && (a < 97 || a > 122))
		return (0);
	return (1);
}