/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:15:18 by ludovictrom       #+#    #+#             */
/*   Updated: 2022/09/15 13:23:08 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *parsing(t_stack *stack, int argc, char **argv)
{
	int	i;
	
	i = 1;

	printf("\nNombre d'arguments = %d\n", (argc-1));

	if (argc > 1)
	{
		while (i < argc)
		{
			insert_data(stack, ft_atoi(argv[i]), 0);
			ft_printf("salut");
			i++;
		}
	}
	return (stack);
}

/* void *parsing_split(t_stack *stack, int argc, char **argv)
{
	int i;
} */


int is_correct(char *string)
{
	int	i;

	i = 0;
	
	if(string[i] == '\0')
		return (0);
	while (string[i] != '\0')
	{
		if (isdigit(string[i]) == 0)
		{
			printf("\nErreur, pas un chiffre\n");
			return (0);
		}
		i++;
	}
	return (1);
}