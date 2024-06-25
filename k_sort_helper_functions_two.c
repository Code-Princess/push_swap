/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort_helper_functions_two.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:27 by linda             #+#    #+#             */
/*   Updated: 2024/06/25 12:43:47 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// we will have our sqrt functions
unsigned int sqrt_k_sort(unsigned int nbr)
{ 
    unsigned int   i;

    i = 1;
    while ( i * i < nbr)
        i++;
    return (i);
}
// k sort variable ==> sqrt lenght of the list
unsigned int k_sort_var_nbr(t_list_push_swap *lst)
{
    return (sqrt_k_sort(ft_lstsize_push_swap(lst)) + 1);
}
// on k sort function from a to b ( maybe one extra helper)
// and one function from b to a
void    k_sort_b_to_a(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
{
    int max;

    while(*stack_b)
    {
        max = find_maximum_node_nbr(*stack_b);
        repeat_rotate(stack_b, max, 'b');
        push_to_and_print(stack_b, stack_a, 'a');
    }
}

// from a to I have three different cases
void    k_sort_a_to_b(t_list_push_swap **stack_a, t_list_push_swap **stack_b)
{
    unsigned int    kv;
    unsigned int    i;

    i = 0;
    kv = k_sort_var_nbr(*stack_a);
    while(*stack_a)
    {
        if((unsigned int)(*stack_a)->nbr < i)
        {
			i++;
            push_to_and_print(stack_a, stack_b, 'b');
            rotate_and_print(stack_b, 'b');
        }
        else if((unsigned int)(*stack_a)->nbr < i + kv)
		{
            push_to_and_print(stack_a, stack_b, 'b');
			i++;
		}
        else
            rotate_and_print(stack_a, 'a');
    }
}
// we will push from a to b until it s empty
// - i push to b, rotate b
// - i + kvar push to b
// - else rotate to a
