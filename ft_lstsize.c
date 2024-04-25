/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:47:05 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/25 14:58:17 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
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
