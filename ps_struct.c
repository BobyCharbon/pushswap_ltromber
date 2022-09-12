/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:50:40 by pierremoret       #+#    #+#             */
/*   Updated: 2022/09/12 19:31:09 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init()
{
	//t_node	*newnode;
	t_stack	*newstack;

	//newnode = new_node();
	newstack = new_stack();
	
	if (newstack == NULL )
		return (NULL);
	
	newstack->head = NULL;
	newstack->tail = NULL;
	return (newstack);
}

t_stack	*new_stack(void)
{
	t_stack	*temp;
	temp = malloc(sizeof(*temp));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->head = NULL;
	temp->tail = NULL;
	return (temp);
}

t_node	*new_node(int data)
{
	t_node	*temp;
	temp = malloc(sizeof(*temp));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

void	insert_top(t_stack *stack,int data)
{
	t_node	*insert;
	insert = new_node(data);
	//printf("%d\n", insert->data);
	insert->next = stack->head;
	//printf("valeur apres %d\n", insert->data);
	if (stack->head == NULL)
	{
		//stack->top = insert;
		stack->tail = insert;
	}
	else
	{
		stack->head->prev = insert;

	}
	
	stack->head = insert;
}

void	insert_bot(t_stack *stack,int data)
{
	t_node	*insert;
	insert = new_node(data);

	insert->next = NULL;
	insert->prev = stack->tail;
	stack->tail->next = insert;
	stack->head = insert;
}

t_stack	swap_a(t_stack *stack)
{
	t_node	tmp1;
	t_node	tmp2;

	tmp1.data = stack->head->data;
	tmp2.data = stack->head->next->data;
	
	stack->head->data = tmp2.data;
	stack->head->next->data = tmp1.data;
	
	/* printf("valeur bot :%d\n", tmp1.data);
	printf("valeur bot :%d\n", tmp2.data); */
	return (*stack);


}

t_stack	rotate_a(t_stack *stack)
{
	t_node	*temp;
	temp = stack->head->next;
	stack->tail->next = stack->head;
	stack->head->prev = stack->tail;
	stack->head->next = NULL;
	stack->tail = stack->head;
	stack->head = temp;
	return (*stack);
}

t_stack	rev_rotate_a(t_stack *stack)
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
	return (*stack);
}

/* t_stack	rotate_a(t_stack *stack)
{
	t_stack *tmp1;
	t_stack *tmp2;

	tmp1 = stack->top;
	tmp2 = stack->bot;

	stack->top = tmp2;
	stack->bot = tmp1;
	return (*stack);	
} */

void	display_list(t_stack *stack)
{
	t_node	*temp;

	temp = stack->head;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
	printf("\n");
}

