/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_linked_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:16:29 by yehan             #+#    #+#             */
/*   Updated: 2022/06/30 13:46:01 by yehan            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/circular_linked_list.h"

void	clist_init(t_clist *plist)
{
	plist->tail = NULL;
	plist->before = NULL;
	plist->cur = NULL;
	plist->num_of_data = 0;
}

void	clist_insert_back(t_clist *plist, t_data data)
{
	t_node	*newnode;

	newnode = ft_calloc(1, sizeof(t_node));
	newnode->data = data;
	if (plist->tail == NULL)
	{
		plist->tail = newnode;
		newnode->next = newnode;
	}
	else
	{
		newnode->next = plist->tail->next;
		plist->tail->next = newnode;
		plist->tail = newnode;
	}
	(plist->num_of_data)++;
}

void	clist_insert_front(t_clist *plist, t_data data)
{
	t_node	*newnode;

	newnode = ft_calloc(1, sizeof(t_node));
	newnode->data = data;
	if (plist->tail == NULL)
	{
		plist->tail = newnode;
		newnode->next = newnode;
	}
	else
	{
		newnode->next = plist->tail->next;
		plist->tail->next = newnode;
	}
	(plist->num_of_data)++;
}

t_data	clist_remove(t_clist *plist)
{
	t_node	*rpos;
	t_data	rdata;

	rpos = plist->cur;
	rdata = rpos->data;
	if (rpos == plist->tail)
	{
		if (plist->tail == plist->tail->next)
			plist->tail = NULL;
		else
			plist->tail = plist->before;
	}
	plist->before->next = plist->cur->next;
	plist->cur = plist->before;
	free(rpos);
	(plist->num_of_data)--;
	return (rdata);
}

int	clist_count(t_clist *plist)
{
	return (plist->num_of_data);
}
