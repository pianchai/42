/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:10 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 10:43:10 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ascii 48 (0) to ascii 57 (9)
return 1 if true
return 0 if false */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

// or

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}