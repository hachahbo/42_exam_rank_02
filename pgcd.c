/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:17:30 by hachahbo          #+#    #+#             */
/*   Updated: 2023/06/01 08:36:54 by hachahbo         ###   ########.fr       */
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
int ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign *= -1; 
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}
int main(int ac ,char **av)
{
	int i;

	if(ac == 3)
	{
		int a = ft_atoi(av[1]);
		int b = ft_atoi(av[2]);
		int n;
		if(a > b)
			n = b;
		else
			n = a;
		i = 2;
		while(n)
		{
			if(a % n == 0 && b % n == 0)
				break;
			n--;
		}
		ft_putnbr(i);
		write(1, "\n", 2);
	}
}