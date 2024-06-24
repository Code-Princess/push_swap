/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:35:08 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/24 16:45:26 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void	del_int(int nbr)
{
	(void)nbr;
}

int	main(int argc, char *argv[])
{
	char				**res;
	char				*s;
	int					flag_allocated;
	int					i;
	t_list_push_swap	*sorted_lst;
	t_list_push_swap 	*stack_a;
	t_list_push_swap	*stack_b;

	flag_allocated = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
	{
		flag_allocated = 1;
		s = ft_strjoin("push_swap ", argv[1]);
		res = ft_split(s, ' ');
		if (!res)
			return (1);
		argc = ft_word_nr(s, ' ');
		argv = res;
		free(s);
	}
	if (!is_valid_input(argc, argv + 1))
	{
		ft_putstr_fd("Error\n", 2);
		free_double_pointer(argc, argv, flag_allocated);
		return (1);
	}
	if (argc == 1 || argc == 2)
		return (free_double_pointer(argc, argv, flag_allocated), 0);
	else if (argc == 3)
	{
		if (ft_atoi(argv[1]) == ft_atoi(argv[2]))
			return (ft_putstr_fd("Error\n", 2), 1);
		if (ft_atoi(argv[1]) > ft_atoi(argv[2]))
			ft_putstr_fd("sa\n", 1);
		return (free_double_pointer(argc, argv, flag_allocated), 0);
	}
	i = 0;
	while (++i < argc)
		ft_lstadd_back_push_swap(&stack_a,
			ft_lstnew_push_swap(ft_atoi(argv[i])));
	free_double_pointer(argc, argv, flag_allocated);
	if (is_double(stack_a))
	{
		ft_putstr_fd("Error\n", 2);
		ft_lstclear_push_swap(&stack_a, del_int);
		return (1);
	}
	if (!is_unsorted(stack_a))
	{
		ft_lstclear_push_swap(&stack_a, del_int);
		return (1);
	}
	sorted_lst = copy_list(stack_a);
	
	sorted_lst = sort_list(sorted_lst, ascending);
	indexing_list(&stack_a, sorted_lst);
	if (argc == 4)
		sort_three_numbers(&stack_a);
	else if (argc == 5)
		sort_four_numbers(&stack_a, &stack_b);
	else if (argc == 6)
		sort_five_numbers(&stack_a, &stack_b);
	else
	{
		k_sort_a_to_b(&stack_a, &stack_b);
		k_sort_b_to_a(&stack_a, &stack_b);
	}
	
	ft_lstclear_push_swap(&stack_a, del_int);
	return (0);
}
