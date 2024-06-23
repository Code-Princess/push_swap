/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_list_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:16:52 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/23 16:52:51 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_push_swap	*ft_lstnew_push_swap(int nbr)
{
	t_list_push_swap	*new_node;

	new_node = (t_list_push_swap *)malloc(1 * sizeof(t_list_push_swap));
	if (new_node == NULL)
		return (NULL);
	new_node->nbr = nbr;
	new_node->position = 0;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front_push_swap(t_list_push_swap **lst, t_list_push_swap *new)
{
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize_push_swap(t_list_push_swap *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_list_push_swap	*ft_lstlast_push_swap(t_list_push_swap *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back_push_swap(t_list_push_swap **lst, t_list_push_swap *new)
{
	t_list_push_swap	*last_node;

	last_node = ft_lstlast_push_swap(*lst);
	if (last_node == NULL)
		*lst = new;
	else
		last_node->next = new;
}
