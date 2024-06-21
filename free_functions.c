/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda <linda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:29:02 by linda             #+#    #+#             */
/*   Updated: 2024/06/21 11:33:06 by linda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				free_double_pointer(int argc, char **argv, int flag)
{
    if (flag == 1)
    {
        while (--argc >= 0)
            free(argv[argc]);
        free(argv);
    }
}