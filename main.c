
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *list_a;
	t_stack *list_b;
	t_node	*temp;
	int	i = 0;
	int	retour = 0;



	(void) argc;
	(void) argv;
	list_a = init();
	list_b = init();
	/* insert_top(list_a, 10);
	insert_top(list_a, 63);
	insert_top(list_a, 79); */
	/* insert_data(list_a, 4);
	insert_data(list_a, 6);
	insert_data(list_a, 56);
	insert_data(list_a, 7);
	insert_data(list_a, 4);
	insert_data(list_a, 27);
	insert_data(list_a, 2);
	insert_data(list_a, 12);
	insert_data(list_a, 15 );*/
	
	insert_data(list_a, 12, 0);
	insert_data(list_a, 2, 0);
	insert_data(list_a, 6, 0);
	insert_data(list_a, -8, 0);
	insert_data(list_a, 40, 0);
	insert_data(list_a, 67, 0);
	insert_data(list_a, 95, 0);
	insert_data(list_a, 98, 0);
	insert_data(list_a, 92, 0);
	insert_data(list_a, 94, 0);
	insert_data(list_a, 96, 0);
	display_list(list_a);
	rev_rotate_a(list_a);
	display_list(list_a);
	// set_pos(list_a);
	


	/* display_pos(list_a);
	tri_selectif(list_a, list_b);
	
	display_pos(list_a); */
	

	


	//display_pos(list_b);
	/* push_b(list_a, list_b);
	push_b(list_a, list_b);
	display_pos(list_b);
	display_pos(list_a);
	swap_both(list_a, list_b);
	display_pos(list_b);
	display_pos(list_a);
	printf("\n position de %d avant = %d \n", list_b->head->data, list_b->head->pos); */
	
	/* set_pos(list_a);
	display_pos(list_a);
	retour = is_sorted(list_a); */
	/* display_list(list_a);
	printf("\n%d\n", retour); */
	/* printf("%d head\n", list_a->head->data);
	printf("%d head->next\n", list_a->head->next->data);
	printf("%d head->next->next\n", list_a->head->next->next->data);
	printf("%d tail->prev->prev\n", list_a->tail->prev->prev->data);
	printf("%d tail->prev\n", list_a->tail->prev->data);
	printf("%d tail\n", list_a->tail->data); */
	/* i = moyenne(list_a);
	printf("/n vAleur Toltale : %d\n", i); */
	/* printf("\nSwap a:\n",swap_a(list_a));
	display_list(list_a); */
	//display_list(list_b);

	
	/* printf("\nRotate a:\n",rotate_a(list_a));
	display_list(list_a); */
	
	//printf("\nReverse Rotate a:\n", rev_rotate_a(list_a));
	//display_list(list_a);



	
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