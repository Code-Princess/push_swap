/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:09:19 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 12:14:36 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_and_print(t_list_push_swap **stack, char stack_name)
{
	if (ft_lstsize_push_swap(*stack) >= 2)
	{
		ft_lstadd_back_push_swap(stack, extract_first_node(stack));
		ft_printf("r%c\n", stack_name);
	}
}

void	reverse_rotate_and_print(t_list_push_swap **stack, char stack_name)
{
	if (ft_lstsize_push_swap(*stack) >= 2)
	{
		ft_lstadd_front_push_swap(stack, extract_last_node(stack));
		ft_printf("rr%c\n", stack_name);
	}
}
