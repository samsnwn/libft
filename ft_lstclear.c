/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:16:09 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/26 13:46:38 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	while (*lst)
	{
		curr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = curr;
	}
	free(*lst);
	*lst = NULL;
}
