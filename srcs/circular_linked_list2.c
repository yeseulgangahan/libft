/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_linked_list2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:16:20 by yehan             #+#    #+#             */
/*   Updated: 2022/06/30 13:45:58 by yehan            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/circular_linked_list.h"

int	clist_first(t_clist *plist, t_data *pdata)
{
	if (plist->tail == NULL)
		return (FALSE);
	plist->before = plist->tail;
	plist->cur = plist->tail->next;
	*pdata = plist->cur->data;
	return (TRUE);
}

int	clist_next(t_clist *plist, t_data *pdata)
{
	if (plist->tail == NULL)
		return (FALSE);
	plist->before = plist->cur;
	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return (TRUE);
}
