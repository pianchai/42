/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:21:34 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/22 08:37:19 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	un;

	if (n < 0)
	{
		write(fd, "-", 1);
		un = n * (-1);
	}
	else
		un = n;
	if (un >= 10)
		ft_putnbr_fd(un / 10, fd);
	c = (un % 10) + 48;
	write(fd, &c, 1);
}