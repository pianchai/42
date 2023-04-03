/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:35:40 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 20:32:54 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function contiguously allocates enough space for count objects that are
     size bytes of memory each and returns a pointer to the allocated memory.
	 The allocated memory is filled with bytes of value zero.*/

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
