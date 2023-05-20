/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:25:21 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/12 01:33:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_atoi(char *str)
{
	int i;
	int res;
	int sig;

	i = 0;
	res = 0;
	sig = 1; 
	while(str[i] == ' ' ||(str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sig *= -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + str[i] - '0';
		i++; 
	}
	return (sig * res);
} 
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(long nbr)
{
	if (nbr < 0)
	{
		ft_putchar ('-');
		ft_putnbr(-nbr);
	}
	if(nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}
int main(int ac, char **av)
{
	int i;
	int prod;

	if(ac == 2)
	{
		int n = ft_atoi(av[1]);
		i = 1;
		while(i <= 9)
		{
			prod = i * n;
			ft_putnbr(i);
			write(1, " * ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(prod);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}