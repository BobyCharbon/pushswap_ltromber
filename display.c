/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:55:05 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 19:55:13 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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