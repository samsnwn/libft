#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);

	while (lst != NULL)
	{
		f(lst->content);
	}
}