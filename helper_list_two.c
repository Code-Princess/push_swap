/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_list_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:22:09 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/20 12:15:22 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone_push_swap(t_list_push_swap *lst, void (*del)(void*))
{
	del(lst->nbr);
	free(lst);
}

void	ft_lstclear_push_swap(t_list_push_swap **lst, void (*del)(void *))
{
	t_list_push_swap	*current_node;
	t_list_push_swap	*tmp_node;

	current_node = *lst;
	while (current_node != NULL)
	{
		tmp_node = current_node;
		current_node = current_node->next;
		del(tmp_node->nbr);
		free(tmp_node);
	}
	*lst = NULL;
}

void	ft_lstiter_push_swap(t_list_push_swap *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->nbr);
		lst = lst->next;
	}
}

t_list_push_swap	*ft_lstmap_push_swap(t_list_push_swap *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list_push_swap	*new_list;
	t_list_push_swap	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->nbr);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
