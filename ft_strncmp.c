/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:31:10 by pongsrit          #+#    #+#             */
/*   Updated: 2023/03/05 16:52:17 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_strncmp compares not more then n characters
of the NUL-terminated strings s1 and s2.

Returns an integer greater than, equal to, or less then 0,
according the string s1 is greater than, equal to, or less then s2.
*/

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((*s1 == *s2) && *s1 && *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (i < n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
