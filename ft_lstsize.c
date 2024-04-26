/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:47:05 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 13:44:03 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		count;

	curr = lst;
	count = 0;
	while (curr)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}

// int main()
// {
// 	int c;
// 	t_list *elem = NULL;
// 	t_list *elem2 = NULL;

//     elem->next = elem2;

//     c = ft_lstsize(elem) + 48;
//     write(1, &c, 1);
//     write(1, "\n", 1);
//     elem->next = NULL;
//     c = ft_lstsize(elem) + 48;
//     write(1, &c, 1);
//     write(1, "\n", 1);
//     elem = NULL;
//     c = ft_lstsize(elem) + 48;
//     write(1, &c, 1);
//     write(1, "\n", 1);

// }
