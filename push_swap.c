/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:35:08 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/26 17:31:59 by llacsivy         ###   ########.fr       */
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
	t_input_data		input_data;
	int					i;
	t_list_push_swap	*stack_a;
	t_list_push_swap	*stack_b;

	input_data.flag_allocated = 0;
	input_data.arguments_vector = argv;
	input_data.number_of_arguments = argc;
	stack_a = NULL;
	stack_b = NULL;
	if (input_data.number_of_arguments == 2)
		parse_input_string(&input_data);
	check_input(&input_data);
	handle_up_to_3_arguments(&input_data);
	i = 0;
	while (++i < input_data.number_of_arguments)
		ft_lstadd_back_push_swap(&stack_a,
			ft_lstnew_push_swap(ft_atoi(input_data.arguments_vector[i])));
	free_double_pointer(input_data.number_of_arguments,
		input_data.arguments_vector, input_data.flag_allocated);
	check_double_entries(&stack_a);
	play_the_game(input_data.number_of_arguments, &stack_a, &stack_b);
	return (EXIT_SUCCESS);
}
