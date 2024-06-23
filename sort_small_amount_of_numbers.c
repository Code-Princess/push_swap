/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_amount_of_numbers.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:26:03 by linda             #+#    #+#             */
/*   Updated: 2024/06/23 20:37:50 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        sort_three_numbers(t_list_push_swap **lst)
{
    int pos_min;
    t_list_push_swap *temp;

    temp = *lst;
    pos_min = find_node_position(*lst, find_minimum_node_nbr(*lst));
    if (pos_min == 0)
    {
        if (temp->next->nbr > temp->next->next->nbr)
        {
            swap_and_print(&temp, 'a');
            rotate_and_print(&temp, 'a');
        }     
    }
    else if (pos_min == 1)
    {
        
        int left_node_nbr = find_node_position(temp, pos_min - 1);
        int right_node_nbr = find_node_position(temp, pos_min + 1);
        if (left_node_nbr < right_node_nbr)
            swap_and_print(&temp, 'a');
        else
            rotate_and_print(&temp, 'a');
    }
    else if (pos_min == 2)
    {
        int first_node_nbr = find_node_position(temp, pos_min - 2);
        int second_node_nbr = find_node_position(temp, pos_min - 1);
        if (first_node_nbr < second_node_nbr)
            reverse_rotate_and_print(&temp, 'a');
        else
        {
            swap_and_print(&temp, 'a');
            reverse_rotate_and_print(&temp, 'a');
        }
    }
}
