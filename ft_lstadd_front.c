#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// if the first node is NULL we need to assign it to the new node.
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	// To add a node at the beginning, we get the first node
	// we replace the first node with the new one;// and then link the previous root to this newly created first node.
	new->next = *lst;
	*lst = new;
}