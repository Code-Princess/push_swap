/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_list_three.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:52:28 by linda             #+#    #+#             */
/*   Updated: 2024/06/23 18:08:18 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_node_position(t_list_push_swap *lst, int nbr)
{
    int position;
    t_list_push_swap *temp;

    position = 0;
    temp = lst;
    while (temp)
    {
        if (temp->nbr == nbr)
            break ;
        position++;
        temp = temp->next;
    }
    if (position == ft_lstsize_push_swap(lst))
        return (-1);
    return (position);
    
}

t_list_push_swap *find_node(t_list_push_swap *lst, int nbr)
{
    t_list_push_swap *find_node;
    t_list_push_swap *temp;
    int               pos;

    find_node = NULL;
    temp = lst;
    pos = find_node_position(lst, nbr);
    if (pos < 0)
        return (NULL);
    while (--pos >= 0)
        temp = temp->next;
    find_node = temp;
    return (find_node);
}

int find_maximum_node_nbr(t_list_push_swap *lst)
{
    int                 max;
    t_list_push_swap    *temp;

    max = INT_MIN;
    temp = lst;
    while (temp)
    {
        if (temp->nbr > max)
            max = temp->nbr;
        temp = temp->next;
    }
    return (max);
}

int find_minimum_node_nbr(t_list_push_swap *lst)
{
    int                 min;
    t_list_push_swap    *temp;

    min = INT_MAX;
    temp = lst;
    while (temp)
    {
        if (temp->nbr < min)
            min = temp->nbr;
        temp = temp->next;
    }
    return (min);
}