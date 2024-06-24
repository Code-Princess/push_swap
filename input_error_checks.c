/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_checks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:53:57 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/24 16:33:04 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_str(char *s)
{
	if (s[0] == '\0')
		return (0);
	while (*s == 32 || *s == '\t')
		s++;
	if ((*s == '+' || *s == '-') && (*(s + 1) != '\0'))
		s++;
	while (*s != '\0')
	{
		if (!ft_isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

int	is_int(long nbr)
{
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (0);
	return (1);
}

int	is_valid_input(int nr_of_words, char **input_str)
{
	int	i;

	i = 0;
	if (nr_of_words == 1 && input_str[1] == NULL)
		return (0);
	while (i < nr_of_words - 1)
	{
		if (!is_valid_str(input_str[i]) || !is_int(ft_atol(input_str[i])))
			return (0);
		i++;
	}
	return (1);
}

int is_double (t_list_push_swap *lst)
{
	t_list_push_swap *temp_i;
	t_list_push_swap *temp_j;

	temp_i = lst;
	while (temp_i && temp_i->next)
	{
		temp_j = temp_i->next;
		while (temp_j)
		{
			if (temp_i->nbr == temp_j->nbr)
				return (1);
			temp_j = temp_j->next;
		}
		temp_i = temp_i->next;
	}
	return (0);
}

int is_unsorted(t_list_push_swap *lst)
{
	t_list_push_swap *temp_i;
	t_list_push_swap *temp_j;

	temp_i = lst;
	while (temp_i && temp_i->next)
	{
		temp_j = temp_i->next;
		while (temp_j)
		{
			if (temp_i->nbr > temp_j->nbr)
				return (1);
			temp_j = temp_j->next;
		}
		temp_i = temp_i->next;
	}
	return (0);
}