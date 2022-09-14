/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:19:53 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 20:20:02 by ludovictrom      ###   ########.fr       */
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