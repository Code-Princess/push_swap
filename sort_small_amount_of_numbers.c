/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_amount_of_numbers.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:26:03 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 20:48:21 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_two_numbers(t_list_push_swap **lst)
{
	t_list_push_swap	*temp;

	temp = *lst;
	if (temp->nbr > temp->next->nbr)
	{
		swap_and_print(&temp, 'a');
	}
	*lst = temp;
}

t_list_push_swap	**sort_three_numbers(t_list_push_swap **lst)
{
	int					pos_min;
	t_list_push_swap	*temp;

	temp = *lst;
	pos_min = find_node_position(*lst, find_minimum_node_nbr(*lst));
	if (pos_min == 0)
	{
		rotate_and_print(lst, 'a');
		call_sort_two_and_reverse_rotate(lst);
		return (lst);
	}
	else if (pos_min == 1)
	{
		if (temp->nbr < temp->next->next->nbr)
			swap_and_print(&temp, 'a');
		else
			rotate_and_print(&temp, 'a');
	}
	else if (pos_min == 2)
	{
		call_sort_two_and_reverse_rotate(lst);
		return (lst);
	}
	*lst = temp;
	return (lst);
}

void	call_sort_two_and_reverse_rotate(t_list_push_swap **lst)
{
	sort_two_numbers(lst);
	reverse_rotate_and_print(lst, 'a');
}

void	sort_four_numbers(t_list_push_swap **stack_a,
		t_list_push_swap **stack_b)
{
	t_list_push_swap	*temp;

	temp = *stack_a;
	repeat_rotate(&temp, find_minimum_node_nbr(temp), 'a');
	push_to_and_print(&temp, stack_b, 'b');
	sort_three_numbers(&temp);
	push_to_and_print(stack_b, &temp, 'a');
	*stack_a = temp;
}

void	sort_five_numbers(t_list_push_swap **stack_a,
		t_list_push_swap **stack_b)
{
	int					len;
	t_list_push_swap	*temp;

	temp = *stack_a;
	len = 5;
	while (--len >= 3)
	{
		repeat_rotate(&temp, find_minimum_node_nbr(temp), 'a');
		push_to_and_print(&temp, stack_b, 'b');
	}
	sort_three_numbers(&temp);
	push_to_and_print(stack_b, &temp, 'a');
	push_to_and_print(stack_b, &temp, 'a');
	*stack_a = temp;
}
