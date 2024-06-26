/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:47:18 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 12:14:08 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_and_print(t_list_push_swap **stack_b,
						t_list_push_swap **stack_a,
						char stack_name)
{
	if (!stack_b || !*stack_b)
		return ;
	ft_lstadd_front_push_swap(stack_a, extract_first_node(stack_b));
	ft_printf("p%c\n", stack_name);
}
