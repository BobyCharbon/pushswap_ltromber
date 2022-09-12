/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:55:50 by pierremoret       #+#    #+#             */
/*   Updated: 2022/09/12 21:19:40 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *list_a;
	t_stack *list_b;
	t_node	*temp;
	int	i = 0;



	(void) argc;
	(void) argv;
	list_a = init();
	//list_b = init();
	insert_bot(list_a, 1);
	insert_bot(list_a, 2);
	insert_bot(list_a, 3);
	insert_bot(list_a, 4);
	insert_bot(list_a, 5);
	
	display_list(list_a);
	printf("%d head\n", list_a->head->data);
	printf("%d head->next\n", list_a->head->next->data);
	printf("%d head->next->next\n", list_a->head->next->next->data);
	printf("%d tail->prev->prev\n", list_a->tail->prev->prev->data);
	printf("%d tail->prev\n", list_a->tail->prev->data);
	printf("%d tail\n", list_a->tail->data);
	
	/* insert_top(list_a, 11);
	insert_top(list_a, 2);
	insert_top(list_a, 8);
	insert_top(list_a, 5); */
	/* insert_top(list_a, 10);
	insert_top(list_a, 63);
	insert_top(list_a, 79); */


	/* insert_top(list_b, list_a->top->data);
	insert_top(list_b, list_a->top->next->data); */
	/* rotate_a(list_a);
	display_list(list_a);
	rev_rotate_a(list_a);
	display_list(list_a);
	swap_a(list_a);
	display_list(list_a); */

	

	
	//display_list(list_b);
	/* swap_a(list);
	display_list(list);
	rotate_a(list);
	
	display_list(list);
	rev_rotate_a(list);
	display_list(list); */

	return (0);
}