/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:50:36 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/20 12:17:29 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_list_push_swap
{
	int				nbr;
	struct s_list	*next;
}					t_list_push_swap;

int					is_valid_str(char *s);
int					is_int(long nbr);
int					is_valid_input(int nr_of_words, char **input_str);
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
						void (*del)(void*));
void				ft_lstclear_push_swap(t_list_push_swap **lst,
						void (*del)(void *));
void				ft_lstiter_push_swap(t_list_push_swap *lst,
						void (*f)(void *));
t_list_push_swap	*ft_lstmap_push_swap(t_list_push_swap *lst,
						void *(*f)(void *),
						void (*del)(void *));
#endif