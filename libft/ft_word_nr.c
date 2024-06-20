/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_nr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:43:41 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/19 21:06:23 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_nr(char *s, char c)
{
	int	nr;
	int	isseparator;

	nr = 0;
	isseparator = 0;
	while (*s != '\0')
	{
		if (*s != c && isseparator == 0)
		{
			isseparator = 1;
			nr++;
		}
		else if (*s == c)
			isseparator = 0;
		s++;
	}
	return (nr);
}
