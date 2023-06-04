/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:30:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/06/01 08:37:31 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

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
void ft_putchar (char c)
{
	write(1, &c, 1);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";

	if (n > 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}