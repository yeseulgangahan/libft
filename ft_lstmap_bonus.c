/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:05:54 by yehan             #+#    #+#             */
/*   Updated: 2021/12/29 15:06:04 by yehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*new;
	int		size;

	if (lst == NULL || f == NULL || del == NULL)
		return ;
	new = ft_lstnew(lst->content);
	if (new == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		size = ft_lstsize(new);
		ft_lstadd_back(&new, ft_lstnew(lst->content));
		if (size == ft_lstsize(new))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}
