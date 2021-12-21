#include "libft_bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *elem)
{
	if (*lst == NULL)
		*lst = elem;
	else
	{
		elem->next = (*lst);
		*lst = elem;
	}
}
