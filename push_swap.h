/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:25:34 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 18:33:21 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include "libft/libft.h"

typedef struct s_node {
	int	data;
	int	pos;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	struct s_node	*head;
	struct s_node	*tail;
}	t_stack;

t_stack	*init();
t_node	*new_node(int data, int pos);
t_stack	*new_stack(void);
void	insert_top(t_stack *stack,int data, int pos);
void	display_list(t_stack *stack);
void	insert_data(t_stack *stack,int data, int pos);

void	push_b(t_stack *list_a, t_stack *list_b);
void	push_a(t_stack *list_a, t_stack *list_b);

t_stack	swap_a(t_stack *stack);
t_stack	swap_b(t_stack *stack);
void	swap_both(t_stack *list_a, t_stack *list_b);


t_stack	rotate_a(t_stack *stack);
t_stack	rotate_b(t_stack *stack);
void	rotate_both(t_stack *list_a, t_stack *list_b);
t_stack	rev_rotate_a(t_stack *stack);
t_stack	rev_rotate_b(t_stack *stack);
void	rev_rotate_both(t_stack *list_a, t_stack *list_b);

int 	moyenne(t_stack *list_a);
void	tri(t_stack *list_a);
int	is_sorted(t_stack *list_a);
int	is_sorted(t_stack *stack);
void	display_pos(t_stack *stack);
void	tri_selectif(t_stack *list_a, t_stack *list_b);
int	list_size(t_stack *stack);
void	set_pos(t_stack *list_a);
#endif
