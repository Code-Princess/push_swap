/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort_helper_functions_two.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:27 by linda             #+#    #+#             */
/*   Updated: 2024/06/24 14:36:03 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// we will have our sqrt functions
int sqrt_k_sort(int nbr)
{ 
    int   i;

    i = 1;
    while ( i * i < nbr)
        i++;
    return (i);
}
// k sort variable ==> sqrt lenght of the list
int k_sort_var_nbr(t_list_push_swap *lst)
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
printf("max: %d\n", max);
        repeat_rotate(stack_b, max, 'b');
        push_to_and_print(stack_b, stack_a, 'a');
    }
}
