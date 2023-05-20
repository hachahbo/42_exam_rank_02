/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:20:55 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/31 11:54:24 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
	long long nb;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
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
	while(str[i] == 9 || (str[i] >= 13 && str[i] <= 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(sign * res);
}

void ft_do_op(char *s, char c, char *st)
{
	
	int a = ft_atoi(s);
	int b = ft_atoi(st);
	int res;

	if(c == '+')
		res = a + b; 
	else if(c == '-')
		res = a - b; 
	else if(c == '*')
		res = a * b; 
	else if(c == '/' && b != 0)
		res = a / b;
	else if(c == '%')
		res = a % b;
	ft_putnbr(res);
}
int main(int ac, char **av)
{
	if(ac == 4)
	{
		ft_do_op(av[1], av[2][0], av[3]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}