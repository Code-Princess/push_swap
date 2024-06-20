/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:59:17 by llacsivy          #+#    #+#             */
/*   Updated: 2024/06/19 17:48:53 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	cast_c;

	cast_c = (char)c;
	while (*s != '\0')
	{
		if (*s == cast_c)
			return ((char *)s);
		s++;
	}
	if (cast_c == '\0')
		return ((char *)s);
	return (NULL);
}
