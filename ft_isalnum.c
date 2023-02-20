/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:33 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 10:43:33 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ascii 65 (A) to ascii 90 (Z)
ascii 97 (a) to ascii 122 (z)
ascii 48 (0) to ascii 57 (9)
return 1 if true
return 0 if false */

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

// or

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}