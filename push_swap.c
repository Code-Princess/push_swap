/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:35:08 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/20 17:05:22 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	**res;
	char	*s;
	int		i;
	int		flag_allocated;

	flag_allocated = 0;
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
printf("argc is 1\n");
		if (flag_allocated == 1)
		{
			while (--argc >= 0)
				free(argv[argc]);
printf("argc is 2\n");
			free(argv);
		}
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	//we need to free when we are terminating our prompt
	if (argc == 1 || argc == 2)
	{
		if (flag_allocated == 1)
		{
		// 1, 0 || 0
			while (--argc >= 0)
				free(argv[argc]);
			free(argv);
		}
		ft_putstr_fd("\n", 1);
		return (0);
	}
	else if (argc == 3)
	{
		if (ft_atoi(argv[1]) > ft_atoi(argv[2]))
			ft_putstr_fd("sa", 1);
		if (flag_allocated == 1)
		{
			while (--argc >= 0)
				free(argv[argc]);
			free(argv);
		}
		ft_putstr_fd("\n", 1);
		return (0);
	}
	// if (argc > 2)
	// {
		
	// }
	i = -1;
	while (++i < argc)
		printf("the  %d arg: %s\n", i, argv[i]);
	

// argc = 0;
// printf("is_valid_input: %d\n", is_valid_input(ft_word_nr(argv[1], ' '), argv));
	// if (is_valid_input(argc - 1, argv))
	// {
	// 	printf("1");
	// 	return (0);
	// }
	// else
	// 	return (1);
	// argc = 0;
	// printf("is_valid_str: %d\n", is_valid_str(argv[1]));
	// if (is_valid_str(argv[1]))
	// 	printf("is_int: %d\n", is_int(ft_atol(argv[1])));
}
