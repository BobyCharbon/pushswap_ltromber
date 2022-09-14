/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:23:54 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 20:19:52 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_node	*new_node(int data, int pos)
{
	t_node	*temp;
	temp = malloc(sizeof(*temp));
	if (temp == NULL)
	{
		return (NULL);
	}
	
	temp->data = data;
	temp->pos = pos;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

void	insert_top(t_stack *stack,int data, int pos)
{
	t_node	*insert;
	insert = new_node(data, pos);
	//printf("%d\n", insert->data);
	insert->next = stack->tail;
	//printf("valeur apres %d\n", insert->data);
	if (stack->tail == NULL)
	{
		//stack->top = insert;
		stack->head = insert;
	}
	else
	{
		stack->tail->prev = insert;

	}
	
	stack->tail = insert;
}

void	insert_data(t_stack *stack, int data, int pos)
{
	t_node	*insert;
	insert = new_node(data, pos);

	if (stack->head == NULL)
	{
		stack->head = insert;
		
	}
	else
	{
		stack->tail->next = insert;
		insert->prev = stack->tail;
	}
	stack->tail = insert;	
}

void	set_pos(t_stack *list_a)
{
	t_node	*temp1;
	t_node	*temp2;
	int	i;
	int	j;

	i = 0;
	temp1 = list_a->head;
	temp2 = list_a->head;
	

	while (temp1 != NULL)
	{	
		i = 0;
		while (temp2 != NULL)
		{
			if (temp1->data > temp2->data)
			{
				i++;
			}
			temp2 = temp2->next;
		}
		temp1->pos = i;
		temp1 = temp1->next;
		temp2 = list_a->head;
	}
	
}

int 	moyenne(t_stack *list_a)
{
	t_node	*temp_a = list_a->head;
	int	total = 0;
	printf("test");
	//t_node	*temp_b = list_b->head;
	int	moy = 0;

	//moy = list_a->head->data;
	while (temp_a->next != NULL)
	{
		moy += temp_a->data;
		temp_a = temp_a->next;
		total++;

		
	}
	total = total + 1;
	moy = moy + list_a->tail->data;
	moy = moy / total;
	return (moy);
}

int	is_sorted(t_stack *list_a)
{
	t_node	*temp = list_a->head;

	while (temp->next != NULL)
	{
		if (temp->next->data < temp->data)
		{
			return (0);
		}
		temp = temp->next;
		
	}
	return (1);
}

void	display_list(t_stack *stack)
{
	t_node	*temp;

	temp = stack->tail;

	while (temp->prev != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->prev;
	}
	printf("%d\n", temp->data);
	printf("\n");
}


int	list_size(t_stack *stack)
{
	int	count;
	t_node *temp;

	count = 0;
	temp = stack->head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);

}