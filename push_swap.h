/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:50:49 by pierremoret       #+#    #+#             */
/*   Updated: 2022/08/23 17:13:16 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>

typedef struct s_node {
	int	data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	struct s_node	*top;
	struct s_node	*bot;
}	t_stack;

t_stack	*init();
t_node	*new_node(int data);
t_stack	*new_stack(void);
void	insert_top(t_stack *stack,int data);
void	display_list(t_stack *stack);
void	insert_bot(t_stack *stack,int data);
t_stack	swap_a(t_stack *stack);
t_stack	rotate_a(t_stack *stack);
t_stack	rev_rotate_a(t_stack *stack);

int	is_sorted(t_stack *stack);

#endif
