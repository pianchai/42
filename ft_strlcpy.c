/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:29:44 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 20:29:48 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*the function ft_strlcpy copies up to dstsize -1 characteres
from string src to dst.
NUL-terminating the result if dstsize is not 0.

Returns the (ft_strlen) total lenght of the string src to create.*/

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	i = 0;
	while ((src[i] != '\0') && (i != dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
