/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:37:24 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 05:58:16 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_atoi(char *str)
{
	int i;
	int res;
	int sign;
	
	i = 0;
	res = 0;
	sign = 1;
	if(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '+' || str[i] == '-')
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
	return(res * sign);
}
void ft_putnbr(long nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if(nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	
}
int main(int ac ,char **av)
{
	int i;
	int res;
	int n;
	int sm;
	
	if(ac == 2)
	{
		res = ft_atoi(av[1]);
		sm = 0;
		n = 2;
		while(n < res)
		{
			i = 2;
			while(i < n)
			{
				if(n % i != 0)
				{
					sm = sm + i;
				}
					i++;
			}
			n++;
		}
		sm += res;
		printf("%d,", sm);
		//ft_putnbr(sm);
	}
}