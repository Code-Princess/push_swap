/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:55:08 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/19 17:50:08 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/* int	main(void)
{
	char	*s = "hy3";

	printf("my ft_strlen of the string %s is %lu\n", s, ft_strlen(s));
	printf("lib strlen of the string %s is %lu\n", s, strlen(s));
	return (0);
} */
