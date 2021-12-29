#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return ;
	new = ft_lstnew(lst->content);
	if (new == NULL)
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(lst->content);
		if (tmp->next == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
