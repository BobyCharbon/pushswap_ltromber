/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:23:54 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 13:06:19 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	*init()
{
	t_stack	*newstack;
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

/* void	insert_bot(t_stack *stack,int data)
{
	t_node	*insert;
	insert = new_node(data);
	insert->next = stack->tail;
	if (stack->head == NULL)
	{
		stack->head = insert;
	}
	else
		insert->prev = stack->head;
	
	insert = stack->tail->next;
	stack->tail = insert;
	insert->next = NULL;
} */

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

void	push_b(t_stack *list_a, t_stack *list_b)
{
	t_node	*temp1;
	t_node	*temp2;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	temp1 = list_a->tail;
	i = temp1->data;
	j = temp1->pos;

	insert_data(list_b, i, j);

	list_a->tail = list_a->tail->prev;
	list_a->tail->next = NULL;
	free(temp1);
}

void	push_a(t_stack *list_a, t_stack *list_b)
{
	t_node	*temp1;
	t_node	*temp2;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	temp1 = list_b->tail->prev;
	i = list_b->tail->data;
	j = list_b->tail->pos;

	insert_data(list_a, i, j);

	list_b->tail = temp1;
	if (temp1 == NULL)
	{
		list_b->head = NULL;
	}
	
	printf("\npa\n");
	free(temp1);
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

/* void	tri(t_stack *list_a)
{
	int	count = 0;

	while (count != 5)
	{
		if (list_a->head->data < list_a->head->next->data)
		{
			rotate(list_a);
		}
		if (list_a->head->data > list_a->head->next->data)
		{
			swap_a(list_a);
		}
		count++;
	}
} */

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

/* void	display_list(t_stack *stack)
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
} */

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

void	display_pos(t_stack *stack)
{
	t_node	*temp;

	temp = stack->tail;

	while (temp->prev != NULL)
	{
		printf("%d [%d]\n", temp->data, temp->pos);
		temp = temp->prev;
	}
	printf("%d [%d]\n", temp->data, temp->pos);
	printf("\n");
}

void	tri_selectif(t_stack *list_a, t_stack *list_b)
{
	int	pos_max;
	int	nb_bit;
	int	count;
	int	count_bit;

	nb_bit = 0;
	count = 0;
	count_bit = 0;
	
	pos_max = list_size(list_a) - 1;
	printf("pos max = %d\n", pos_max);
	while ((pos_max >> nb_bit) != 0)
		nb_bit++;
	while (count_bit < nb_bit)
	{
		printf("nbbit %d\n", nb_bit);
		while (count < pos_max)
		{
			if ((list_a->tail->pos >> count_bit) & 1)
			{
				rotate_a(list_a);
				display_pos(list_a);
				
			}
			else
			{
				push_b(list_a, list_b);
				display_pos(list_b);
			}
			count++;
			printf("\n Valeur de count %d \n", count);
		}
		count_bit++;
		count = 0;
		printf("bit %d\n", count_bit);
		while (list_b->head != NULL)
			push_a(list_a, list_b);
	}
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