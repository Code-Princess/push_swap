/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:43:42 by linda             #+#    #+#             */
/*   Updated: 2024/06/22 16:59:00 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// understanding how we will implement the commands in the list perspective
// sa is taking the head of the stack_a and swaping the nodes 0 1 ==> 1 0 2 3 4
// we will need &* <=> ** for to change the head of the list with the next one
// we need to know if we have atleast 2 nodes
void    swap(t_list_push_swap **stack, char stack_name) 
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
    ft_printf("s%c\n", stack_name);
}