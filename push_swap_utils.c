/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:47:12 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/26 20:01:47 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	play_the_game(int number_of_arguments, t_list_push_swap **stack_a,
			t_list_push_swap **stack_b)
{
	t_list_push_swap	*sorted_lst;

	if (!is_unsorted(*stack_a))
	{
		ft_lstclear_push_swap(stack_a, del_int);
		exit(EXIT_FAILURE);
	}
	sorted_lst = copy_list(*stack_a);
	sorted_lst = sort_list(sorted_lst, ascending);
	indexing_list(stack_a, sorted_lst);
	if (number_of_arguments == 4)
		stack_a = sort_three_numbers(stack_a);
	else if (number_of_arguments == 5)
		sort_four_numbers(stack_a, stack_b);
	else if (number_of_arguments == 6)
		sort_five_numbers(stack_a, stack_b);
	else
	{
		k_sort_a_to_b(stack_a, stack_b);
		k_sort_b_to_a(stack_a, stack_b);
	}
	print_stack(*stack_a);
	ft_lstclear_push_swap(stack_a, del_int);
}

void	check_double_entries(t_list_push_swap **stack)
{
	if (is_double(*stack))
	{
		ft_putstr_fd("Error\n", 2);
		ft_lstclear_push_swap(stack, del_int);
		exit(EXIT_FAILURE);
	}
}

void	parse_input_string(t_input_data *input_data)
{
	char				*s;
	char				**res;

	input_data->flag_allocated = 1;
	s = ft_strjoin("push_swap ", input_data->arguments_vector[1]);
	res = ft_split(s, ' ');
	if (!res[1])
	{
		free_double_pointer(input_data->number_of_arguments, res,
			input_data->flag_allocated);
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	input_data->number_of_arguments = ft_word_nr(s, ' ');
	input_data->arguments_vector = res;
	free(s);
}

void	check_input(t_input_data *input_data)
{
	if (!is_valid_input(input_data->number_of_arguments,
			(input_data->arguments_vector) + 1))
	{
		ft_putstr_fd("Error\n", 2);
		free_double_pointer(input_data->number_of_arguments,
			input_data->arguments_vector, input_data->flag_allocated);
		exit (EXIT_FAILURE);
	}
}

void	handle_up_to_3_arguments(t_input_data *input_data)
{
	if (input_data->number_of_arguments == 1 || \
		input_data->number_of_arguments == 2)
	{
		free_double_pointer(input_data->number_of_arguments,
			input_data->arguments_vector, input_data->flag_allocated);
		exit(EXIT_SUCCESS);
	}
	else if (input_data->number_of_arguments == 3)
	{
		if (ft_atoi(input_data->arguments_vector[1]) == \
			ft_atoi(input_data->arguments_vector[2]))
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_SUCCESS);
		}
		if (ft_atoi(input_data->arguments_vector[1]) > \
			ft_atoi(input_data->arguments_vector[2]))
			ft_putstr_fd("sa\n", 1);
		free_double_pointer(input_data->number_of_arguments,
			input_data->arguments_vector, input_data->flag_allocated);
		exit(EXIT_SUCCESS);
	}
}
