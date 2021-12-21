#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	while (lst)
	{
		del(lst->content);
		lst = lst->next;
	}
}
