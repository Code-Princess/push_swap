/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:50:36 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/26 20:41:20 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_list_push_swap
{
	int						nbr;
	int						position;
	struct s_list_push_swap	*next;
}	t_list_push_swap;

typedef struct s_input_data
{
	int		number_of_arguments;
	int		flag_allocated;
	char	**arguments_vector;
}	t_input_data;

int					is_valid_str(char *s);
int					is_int(long nbr);
int					is_valid_input(int nr_of_words, char **input_str);
int					is_double(t_list_push_swap *lst);
int					is_unsorted(t_list_push_swap *lst);
t_list_push_swap	**sort_three_numbers(t_list_push_swap **lst);
void				sort_four_numbers(t_list_push_swap **stack_a,
						t_list_push_swap **stack_b);
void				sort_five_numbers(t_list_push_swap **stack_a,
						t_list_push_swap **stack_b);
int					is_smaller_median(t_list_push_swap *lst, int nbr);
void				repeat_rotate(t_list_push_swap **lst, int nbr,
						char stack_name);
unsigned int		sqrt_k_sort(unsigned int nbr);
unsigned int		k_sort_var_nbr(t_list_push_swap *lst);
void				k_sort_b_to_a(t_list_push_swap **stack_a,
						t_list_push_swap **stack_b);
void				k_sort_a_to_b(t_list_push_swap **stack_a,
						t_list_push_swap **stack_b);
t_list_push_swap	*ft_lstnew_push_swap(int nbr);
void				ft_lstadd_front_push_swap(t_list_push_swap **lst,
						t_list_push_swap *new);
int					ft_lstsize_push_swap(t_list_push_swap *lst);
t_list_push_swap	*ft_lstlast_push_swap(t_list_push_swap *lst);
void				ft_lstadd_back_push_swap(t_list_push_swap **lst,
						t_list_push_swap *new);
void				ft_lstdelone_push_swap(t_list_push_swap *lst,
						void (*del)(int));
void				del_int(int nbr);
void				ft_lstclear_push_swap(t_list_push_swap **lst,
						void (*del)(int));
void				ft_lstiter_push_swap(t_list_push_swap *lst,
						void (*f)(int));
t_list_push_swap	*ft_lstmap_push_swap(t_list_push_swap *lst, int (*f)(int),
						void (*del)(int));
int					find_node_position(t_list_push_swap *lst, int nbr);
t_list_push_swap	*find_node(t_list_push_swap *lst, int nbr);
int					find_maximum_node_nbr(t_list_push_swap *lst);
int					find_minimum_node_nbr(t_list_push_swap *lst);
void				print_double_pointer(int argc, char **argv);
void				print_stack(t_list_push_swap *lst);
void				free_double_pointer(int argc, char **argv, int flag);
t_list_push_swap	*sort_list(t_list_push_swap *lst, int (*cmp)(int, int));
int					ascending(int a, int b);
t_list_push_swap	*copy_list(t_list_push_swap *lst);
void				indexing_list(t_list_push_swap **stack_a,
						t_list_push_swap *copied);
t_list_push_swap	*extract_first_node(t_list_push_swap **lst);
t_list_push_swap	*extract_last_node(t_list_push_swap **lst);
void				swap_and_print(t_list_push_swap **stack, char stack_name);
void				push_to_and_print(t_list_push_swap **stack_b,
						t_list_push_swap **stack_a, char stack_name);
void				rotate_and_print(t_list_push_swap **stack, char stack_name);
void				reverse_rotate_and_print(t_list_push_swap **stack,
						char stack_name);
void				play_the_game(int number_of_arguments,
						t_list_push_swap **stack_a, t_list_push_swap **stack_b);
void				check_double_entries(t_list_push_swap **stack);
void				parse_input_string(t_input_data *input_data);
void				check_input(t_input_data *input_data);
void				handle_up_to_3_arguments(t_input_data *input_data);
void				call_sort_two_and_reverse_rotate(t_list_push_swap **lst);
#endif