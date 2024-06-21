/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:32:09 by linda             #+#    #+#             */
/*   Updated: 2024/06/21 12:51:11 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ascending(int a, int b)
{
    return (a < b);
}

t_list_push_swap *sort_list(t_list_push_swap *lst, int (*cmp)(int, int))
{	int	tmp_data;
	t_list_push_swap *tmp;
	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->nbr, lst->next->nbr)) == 0)
		{
			tmp_data = lst->nbr;
			lst->nbr = lst->next->nbr;
			lst->next->nbr = tmp_data;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
