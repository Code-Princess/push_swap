/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:29:31 by linda             #+#    #+#             */
/*   Updated: 2024/06/26 17:40:49 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_double_pointer(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ft_printf("argv: %s\n", argv[i]);
		i++;
	}
}

void	print_stack(t_list_push_swap *lst)
{
	t_list_push_swap	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_printf("[%d]-> ", tmp->nbr);
		tmp = tmp->next;
	}
	ft_printf("[NULL]\n");
}
