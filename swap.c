/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:25:20 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 12:25:38 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	swap_a(t_stack *stack)
{
	t_node	tmp1;
	t_node	tmp2;
	if (stack->tail == NULL || stack->tail->prev == NULL)
	{
		return (*stack);
	}
	
	tmp1.data = stack->tail->data;
	tmp1.pos = stack->tail->pos;
	tmp2.data = stack->tail->prev->data;
	tmp2.pos = stack->tail->prev->pos;
	
	
	stack->tail->data = tmp2.data;
	stack->tail->pos = tmp2.pos;
	stack->tail->prev->data = tmp1.data;
	stack->tail->prev->pos = tmp1.pos;
	
	printf("\nsa\n");
	return (*stack);
}

t_stack	swap_b(t_stack *stack)
{
	t_node	tmp1;
	t_node	tmp2;
	if (stack->tail == NULL || stack->tail->prev == NULL)
	{
		return (*stack);
	}
	
	tmp1.data = stack->tail->data;
	tmp1.pos = stack->tail->pos;
	tmp2.data = stack->tail->prev->data;
	tmp2.pos = stack->tail->prev->pos;
	
	
	stack->tail->data = tmp2.data;
	stack->tail->pos = tmp2.pos;
	stack->tail->prev->data = tmp1.data;
	stack->tail->prev->pos = tmp1.pos;
	
	printf("\nsb\n");
	return (*stack);
}

void	swap_both(t_stack *list_a, t_stack *list_b)
{
	swap_a(list_a);
	swap_b(list_b);
	printf("\nss\n");
}
