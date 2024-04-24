#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	// if the first node is NULL we need to assign it to the new node.
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	// dereference pointer to pointer to first node of the list.
	curr = *lst;
	// Assign NULL to member next of the node we are creating to say it is the last node of the list
	new->next = NULL;
	// Exit condition: until the next node is Null aka until member *next is NULL.
	while (curr->next != NULL)
	{
		// increment for lists: To go to the next node the pointer "next" points to the successive node.
		curr = curr->next;
	}
	// after exiting the loop at this point,
	// the last node of the list is curr->next.
	// Once we reach the last node of the list (curr->next != NULL) we assign it to the new node
	curr->next = new;
}

#include <stdio.h>

int	main(void)
{
	t_list *root;

	root->content = 15;
	root->next = NULL;
	ft_lstadd_back(&root, -2);
	ft_lstadd_back(&root, 11);

	for (t_list *curr = root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->content);
	}
}