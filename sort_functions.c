/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:32:09 by linda             #+#    #+#             */
/*   Updated: 2024/06/24 11:45:59 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ascending(int a, int b)
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

t_list_push_swap *copy_list(t_list_push_swap *lst)
{
    t_list_push_swap    *copied_list;

    copied_list = NULL;
    while(lst)
    {
        ft_lstadd_back_push_swap(&copied_list, ft_lstnew_push_swap(lst->nbr));
        lst = lst->next;
    }
    return (copied_list);
}

void    indexing_list(t_list_push_swap **stack_a, t_list_push_swap *copied)
{
    int i;
    t_list_push_swap *tmp;
    t_list_push_swap *tmp_copy;

    i = 0;
    tmp = *stack_a;
    while (tmp)
    {
        i = 0;
        tmp_copy = copied;
        while(tmp_copy)
        {
            if (tmp->nbr == tmp_copy->nbr)
            {
                tmp->nbr = i;
                break ;
            }
            i++;
            tmp_copy = tmp_copy->next;
        }
        tmp = tmp->next;
    }
    ft_lstclear_push_swap(&copied, del_int);
}