/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:43:42 by linda             #+#    #+#             */
/*   Updated: 2024/06/22 17:32:53 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    			swap(t_list_push_swap **stack)
{
    t_list_push_swap    *node1;
    t_list_push_swap    *node2;

    if (ft_lstsize_push_swap(*stack) >= 2)
    {
        node1 = extract_first_node(stack);
        node2 = extract_first_node(stack);
        ft_lstadd_front_push_swap(stack, node1);
        ft_lstadd_front_push_swap(stack, node2);
    }
}

void    swap_and_print(t_list_push_swap **stack, char stack_name) 
{
    swap(stack);
    ft_printf("s%c\n", stack_name);
}

void swap_swap_and_print(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}
