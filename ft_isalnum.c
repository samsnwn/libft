/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:43:30 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/22 12:57:36 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 0 || ft_isdigit(c) == 0)
		return (0);
	return (1);
}

int	ft_isalpha(int c)
{
	unsigned char	a;

	a = c;
	if ((a < 65 || a > 90) && (a < 97 || a > 122))
		return (0);
	return (1);
}

int	ft_isdigit(int c)
{
	char	a;

	a = c;
	if (a < 49 || a > 57)
		return (0);
	return (1);
}
