/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:44:05 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 10:44:05 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ascii 0 (nul) to ascii 127 (del)
return 1 if true
return 0 if false */

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

// or

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}