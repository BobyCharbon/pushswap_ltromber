/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:58:46 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 20:18:12 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	printf("\npb\n");
	free(temp1);
}