/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:50:36 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/21 12:49:25 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_list_push_swap
{
	int				nbr;
	struct s_list_push_swap	*next;
}					t_list_push_swap;

int					is_valid_str(char *s);
int					is_int(long nbr);
int					is_valid_input(int nr_of_words, char **input_str);
int					is_double (t_list_push_swap *lst);
int 				is_unsorted(t_list_push_swap *lst);
//=========LIST_RELATED_OPERATIONS_ONE==========
t_list_push_swap	*ft_lstnew_push_swap(int nbr);
void				ft_lstadd_front_push_swap(t_list_push_swap **lst,
						t_list_push_swap *new);
int					ft_lstsize_push_swap(t_list_push_swap *lst);
t_list_push_swap	*ft_lstlast_push_swap(t_list_push_swap *lst);
void				ft_lstadd_back_push_swap(t_list_push_swap **lst,
						t_list_push_swap *new);
//========LIST_RELATED_OPERATIONS_TWO============
void				ft_lstdelone_push_swap(t_list_push_swap *lst,
						void (*del)(int));
void				ft_lstclear_push_swap(t_list_push_swap **lst,
						void (*del)(int));
void				ft_lstiter_push_swap(t_list_push_swap *lst,
						void (*f)(int));
t_list_push_swap	*ft_lstmap_push_swap(t_list_push_swap *lst,
						int(*f)(int),
						void (*del)(int));
//==========PRINT_HELPERS========================
void				print_double_pointer(int argc, char **argv);
void				print_stack(t_list_push_swap *lst);
//==========FREE_FUNCTIONS========================
void				free_double_pointer(int argc, char **argv, int flag);
//==========SORTING_FUNCTIONS========================
t_list_push_swap	*sort_list(t_list_push_swap *lst, int (*cmp)(int, int));

#endif