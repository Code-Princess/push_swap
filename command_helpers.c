/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:19:18 by linda             #+#    #+#             */
/*   Updated: 2024/06/22 16:41:55 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_push_swap	*extract_first_node(t_list_push_swap **lst)
{
    t_list_push_swap *extracted_node;

    if (!lst || !*lst)
        return (NULL);
    extracted_node = *lst;
    *lst = (*lst)->next;
    extracted_node->next = NULL;
    return (extracted_node);
}

t_list_push_swap    *extract_last_node(t_list_push_swap **lst)
{
    t_list_push_swap    *extracted_node;
    t_list_push_swap    *lst_start;
    int                 nodes_count;
    int                 i;
    
    lst_start = *lst;
    i = 1;
    extracted_node = ft_lstlast_push_swap(*lst);
    nodes_count = ft_lstsize_push_swap(*lst);
    while (i < nodes_count - 1)
    {
        *lst = (*lst)->next;
        i++;
    }
    (*lst)->next = NULL;
    *lst = lst_start;
    return (extracted_node);
}
