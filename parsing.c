/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:15:18 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/14 19:51:53 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *parsing(t_stack *stack, int argc, char **argv)
{
	int	i;
	
	i = 1;
	printf("\n1 argument\n");
	printf("\nNombre d'arguments = %d\n", (argc-1));

	if (argc > 1)
	{
		while (i < argc)
		{
			insert_data(stack, atoi(argv[i]), 0);
			i++;
		}
	}
	return (stack);
}