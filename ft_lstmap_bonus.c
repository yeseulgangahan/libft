/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:05:54 by yehan             #+#    #+#             */
/*   Updated: 2021/12/29 19:36:01 by yehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	int		size;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	lst2 = ft_lstnew(f(lst->content));
	if (lst2 == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		size = ft_lstsize(lst2);
		ft_lstadd_back(&lst2, ft_lstnew(f(lst->content)));
		if (size == ft_lstsize(lst2))
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst2);
}
