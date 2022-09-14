/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:32:20 by pierremoret       #+#    #+#             */
/*   Updated: 2022/09/14 18:31:444 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/* t_stack	rotate_a(t_stack *stack)
{
	t_node	*temp;
	if (stack->head == NULL || stack->head->next == NULL)
	{
		return (*stack);
	}
	temp = stack->head->next;
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->head->next = NULL;
	stack->tail = stack->head;
	stack->head = temp;
	printf("\nra\n");
	return (*stack);
} */

t_stack	rotate_a(t_stack *stack)
{
	t_node	*temp;
	if (stack->head == NULL || stack->head->next == NULL)
	{
		return (*stack);
	}
	temp = stack->tail->prev;
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->tail->prev = NULL;
	stack->head = stack->tail;
	stack->tail = temp;
	printf("\nra\n");
	return (*stack);
}

t_stack	rotate_b(t_stack *stack)
{
	t_node	*temp;
	if (stack->head == NULL || stack->head->next == NULL)
	{
		return (*stack);
	}
	temp = stack->tail->prev;
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->tail->prev = NULL;
	stack->head = stack->tail;
	stack->tail = temp;
	printf("\nrb\n");
	return (*stack);
}

void rotate_both(t_stack *list_a, t_stack *list_b)
{
	rotate_a(list_a);
	rotate_b(list_b);
	printf("\nrboth\n");
}

/* t_stack	rev_rotate_a(t_stack *stack)
{
	t_node	*temp1;
	t_node	*temp2;
	
	temp1 = stack->head;
	temp2 = stack->tail->prev;

	stack->head = stack->tail;
	stack->head->next = temp1;
	stack->head->prev = NULL;

	stack->tail = temp2;
	stack->tail->next = NULL;
	printf("\nrra\n");
	return (*stack);
} */

t_stack	rev_rotate_a(t_stack *stack)
{
	t_node *temp1;
	t_node *temp2;

	temp1 = stack->head->next;
	stack->head->prev = stack->tail;
	stack->head->next = NULL;
	temp1->prev = NULL;
	stack->tail = stack->head;
	temp1 = stack->head;
	printf("\nrra\n");
	return (*stack);
}

t_stack	rev_rotate_b(t_stack *stack)
{
	t_node *temp1;
	t_node *temp2;

	temp1 = stack->head->next;
	stack->head->prev = stack->tail;
	stack->head->next = NULL;
	temp1->prev = NULL;
	stack->tail = stack->head;
	temp1 = stack->head;
	printf("\nrrb\n");
	return (*stack);
}

void	rev_rotate_both(t_stack *list_a, t_stack *list_b)
{
	rev_rotate_a(list_a);
	rev_rotate_b(list_b);
	printf("\nrrboth\n");
}