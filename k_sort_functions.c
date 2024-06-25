/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:27 by linda             #+#    #+#             */
/*   Updated: 2024/06/25 17:46:56 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	k_sort_b_to_a(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
{
	int	max;

	while (*stack_b)
	{
		max = find_maximum_node_nbr(*stack_b);
		repeat_rotate(stack_b, max, 'b');
		push_to_and_print(stack_b, stack_a, 'a');
	}
}

void	k_sort_a_to_b(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
{
	unsigned int	kv;
	unsigned int	i;

	i = 0;
	kv = k_sort_var_nbr(*stack_a);
	while (*stack_a)
	{
		if ((unsigned int)(*stack_a)->nbr < i)
		{
			i++;
			push_to_and_print(stack_a, stack_b, 'b');
			rotate_and_print(stack_b, 'b');
		}
		else if ((unsigned int)(*stack_a)->nbr < i + kv)
		{
			push_to_and_print(stack_a, stack_b, 'b');
			i++;
		}
		else
			rotate_and_print(stack_a, 'a');
	}
}
