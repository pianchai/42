/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:57:47 by pongsrit          #+#    #+#             */
/*   Updated: 2023/02/20 11:57:47 by pongsrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *s)
{
int sign;
int number;
int i;

sign = 1;
number = 0;
i =0;
while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
    i++;
if (s[i] == '+' || s[i] == '-')
{
    if (s[i] == '-')
        sign *= -1;
    i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
    number = number * 10 + (s[i] - '0');
    i++;
}
return (sign * number);
}