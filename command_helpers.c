/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:19:18 by linda             #+#    #+#             */
/*   Updated: 2024/06/22 15:42:20 by linda            ###   ########.fr       */
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