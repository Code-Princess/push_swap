/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort_helper_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:27 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 12:16:52 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_smaller_median(t_list_push_swap *lst, int nbr)
{
	int	median;
	int	position;

	position = find_node_position(lst, nbr);
	median = (ft_lstsize_push_swap(lst) + 1) / 2;
	return (position < median);
}

void	repeat_rotate(t_list_push_swap **lst, int nbr, char stack_name)
{
	int					pos;
	int					len;
	int					rotations;
	t_list_push_swap	*temp;

	temp = *lst;
	pos = find_node_position(temp, nbr);
	len = ft_lstsize_push_swap(temp);
	if (is_smaller_median(temp, nbr))
		while (--pos >= 0)
			rotate_and_print(&temp, stack_name);
	else
	{
		rotations = len - pos;
		while (--rotations >= 0)
			reverse_rotate_and_print(&temp, stack_name);
	}
	*lst = temp;
}

unsigned int	sqrt_k_sort(unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	while (i * i < nbr)
		i++;
	return (i);
}

unsigned int	k_sort_var_nbr(t_list_push_swap *lst)
{
	return (sqrt_k_sort(ft_lstsize_push_swap(lst)) + 1);
}
