/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:59:48 by pierremoret       #+#    #+#             */
/*   Updated: 2022/09/12 18:59:44 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int i = 0;
	t_stack	temp;
	
	while (i == 0)
	{

		if (stack->head->data < stack->head->next->data && stack->head->data > stack->tail->data)
		{
			i = is_sorted(stack);
			

		}
		else
			i = 1;
		
	
	}
	printf("testok");
	return (1);
}