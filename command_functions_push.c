/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_functions_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:47:18 by linda             #+#    #+#             */
/*   Updated: 2024/06/23 16:21:27 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_to_and_print(t_list_push_swap **stack_b,
                t_list_push_swap **stack_a, char stack_name)
{
     if (!stack_b || !*stack_b)
        return ;
    ft_lstadd_front_push_swap(stack_a, extract_first_node(stack_b));
    ft_printf("p%c\n", stack_name);
}

// void    push_to_b_and_print(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
// {
//      if (!stack_a || !*stack_a)
//         return ;
//     ft_lstadd_front_push_swap(stack_b, extract_first_node(stack_a));
//     ft_printf("pb\n");
// }

