/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:34:01 by pongsrit          #+#    #+#             */
/*   Updated: 2023/04/03 20:27:16 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.  The pointer may subsequently be used
as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s) + 1;
	p = (char *)malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, len);
	return (p);
}
