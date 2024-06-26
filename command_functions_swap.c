/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions_swap.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:43:42 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 17:38:28 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_and_print(t_list_push_swap **stack, char stack_name)
{
	t_list_push_swap	*node1;
	t_list_push_swap	*node2;

	if (ft_lstsize_push_swap(*stack) >= 2)
	{
		node1 = extract_first_node(stack);
		node2 = extract_first_node(stack);
		ft_lstadd_front_push_swap(stack, node1);
		ft_lstadd_front_push_swap(stack, node2);
		ft_printf("s%c\n", stack_name);
	}
}
