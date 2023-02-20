/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:47 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 10:43:47 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ascii 65 (A) to ascii 90 (Z)
ascii 97 (a) to ascii 122 (z)
return 1 if true
return 0 if false */

int ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

// or

int ftisalpha(int c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}