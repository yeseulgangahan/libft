/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:06:07 by yehan             #+#    #+#             */
/*   Updated: 2022/07/01 14:18:44 by yehan            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_stack.h"

size_t	stack_count(t_stack *pstack)
{
	return ((size_t)clist_count(pstack));
}

int	stack_peek(t_stack *pstack, t_data *pdata)
{
	return (clist_first(pstack, pdata));
}

int	stack_next(t_stack *pstack, t_data *pdata)
{
	return (clist_next(pstack, pdata));
}
