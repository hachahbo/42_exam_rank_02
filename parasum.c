/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:03:12 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/10 14:24:07 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(long nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
int main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}