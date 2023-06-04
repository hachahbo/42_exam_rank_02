/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:37:24 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/24 08:05:35 by hachahbo         ###   ########.fr       */
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
int ft_is_prime(int n)
{
	int i = 2; 
	if(n < 2)
		return(0);
	while(i * i  <= n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return(1);
}
int sum_prime(int n)
{
	int i = 2;
	int sum = 0;
	
	while(i <= n)
	{
		if(ft_is_prime(i))
			sum += i;
		i++; 
	}
	return (sum);
}
int main(int ac, char **av)
{
	int num;
	
	if(ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	
	num = atoi(av[1]);
	num = sum_prime(num);
	printf("num %d\n", num);
}