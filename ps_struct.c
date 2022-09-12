/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:50:40 by pierremoret       #+#    #+#             */
/*   Updated: 2022/08/23 17:13:12 by pierremoret      ###   ########.fr       */
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
	
	newstack->top = NULL;
	newstack->bot = NULL;
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
	temp->top = NULL;
	temp->bot = NULL;
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
	insert->next = stack->top;
	//printf("valeur apres %d\n", insert->data);
	if (stack->top == NULL)
	{
		//stack->top = insert;
		stack->bot = insert;
	}
	else
	{
		stack->top->prev = insert;

	}
	
	stack->top = insert;
}

void	insert_bot(t_stack *stack,int data)
{
	t_node	*insert;
	insert = new_node(data);

	insert->next = NULL;
	insert->prev = stack->bot;
	stack->bot->next = insert;
	stack->bot = insert;
}

t_stack	swap_a(t_stack *stack)
{
	t_node	tmp1;
	t_node	tmp2;

	tmp1.data = stack->top->data;
	tmp2.data = stack->top->next->data;
	
	stack->top->data = tmp2.data;
	stack->top->next->data = tmp1.data;
	
	/* printf("valeur bot :%d\n", tmp1.data);
	printf("valeur bot :%d\n", tmp2.data); */
	return (*stack);


}

t_stack	rotate_a(t_stack *stack)
{
	t_node	*temp;
	temp = stack->top->next;
	stack->bot->next = stack->top;
	stack->top->prev = stack->bot;
	stack->top->next = NULL;
	stack->bot = stack->top;
	stack->top = temp;
	return (*stack);
}

t_stack	rev_rotate_a(t_stack *stack)
{
	t_node	*temp1;
	t_node	*temp2;
	
	temp1 = stack->top;
	temp2 = stack->bot->prev;

	stack->top = stack->bot;
	stack->top->next = temp1;
	stack->top->prev = NULL;

	stack->bot = temp2;
	stack->bot->next = NULL;
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

	temp = stack->top;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	printf("%d\n", temp->data);
	printf("\n");
}

