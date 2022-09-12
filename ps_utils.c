/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:59:48 by pierremoret       #+#    #+#             */
/*   Updated: 2022/08/23 18:01:52 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int i = 0;
	t_stack	temp;
	
	while (i == 0)
	{

		if (stack->top->data < stack->top->next->data && stack->top->data > stack->bot->data)
		{
			i = is_sorted(stack);
			

		}
		else
			i = 1;
		
	
	}
	printf("testok");
	return (1);
}