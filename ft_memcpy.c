/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:57:30 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 18:57:38 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ft_memcpy copies n bytes from memory area src to memory area dst.

Return the original value of dst.*/

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
