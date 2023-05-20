/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:20:19 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 03:40:33 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	int n;

	i = 0;
	if(str[i] == ' ' || (str[i] <= 13 && str[i] <= 9))
		i++;
	sign = 1;
	res = 0;
	n = 0;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i]  == '-')
		{
			sign *= -1;	
		}
		i++;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) +  (str[i] - '0');
		}
		i++;
	}
	return (sign * res);
		
}

int main()
{
	char str[] = "     		-+--123";
	printf("%d\n", ft_atoi(str));
}