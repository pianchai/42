/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:57:49 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 18:58:02 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_memmove copies len bytes from the string src to string dst.
The two strings may overlap, the copy is always done in a non-destructive manner.

Returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s || len == 0)
		return (d);
	if (d > s && s + len > d)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		return (ft_memcpy(d, s, len));
	return (d);
}
