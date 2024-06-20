/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error_checks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:53:57 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/20 17:01:15 by llacsivy         ###   ########.fr       */
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
	while (i < nr_of_words - 1)
	{
		if (!is_valid_str(input_str[i]) || !is_int(ft_atol(input_str[i])))
			return (0);
		i++;
	}
	return (1);
}
