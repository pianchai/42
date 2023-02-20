/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:01:25 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 11:01:25 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if found lower case then change to upper case by minus 32

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    return (c - 32);
    return (c);
}

// or

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}