/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:48:15 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 19:49:47 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_selectif(t_stack *list_a, t_stack *list_b)
{
	int	pos_max;
	int	nb_bit;
	int	count;
	int	count_bit;
	int	nb_operation = 0;

	nb_bit = 0;
	count = 0;
	count_bit = 0;
	
	pos_max = list_size(list_a) - 1;
	while ((pos_max >> nb_bit) != 0)
		nb_bit++;
	while (count_bit < nb_bit)
	{
		while (count <= pos_max)
		{
			if ((list_a->tail->pos >> count_bit) & 1)
			{
				rotate_a(list_a);
				nb_operation += 1;
			}
			else
			{
				push_b(list_a, list_b);
				nb_operation += 1;
			}
			count++;
		}
		count_bit++;
		count = 0;
		while (list_b->head != NULL)
		{
			push_a(list_a, list_b);
			nb_operation += 1;
		}
	}
	printf("\nNombre d'opérations = %d\n", nb_operation);
}