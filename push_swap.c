/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:35:08 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/19 14:56:03 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (is_valid_input(argc - 1, argv))
	{
		printf("1");
		return (0);
	}
	else
		return (1);
	// argc = 0;
	// printf("is_valid_str: %d\n", is_valid_str(argv[1]));
	// if (is_valid_str(argv[1]))
	// 	printf("is_int: %d\n", is_int(ft_atol(argv[1])));
}
