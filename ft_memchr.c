/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:54:35 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 18:54:50 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_memchr locates the first occurence of c in string s,
search in no more than len characteres of in string s.

Return a pointer to the byte located c.*/

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (len > 0)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
		len--;
	}
	return (NULL);
}
