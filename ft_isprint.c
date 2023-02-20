/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:53 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 10:42:53 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ascii 32 (spacebar) to ascii 126 (tilde)
return 1 if true
return 0 if false */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// or

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}