/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:37:51 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/23 16:48:51 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_number(int number)
{
	char str[] = "0123456789";

	if(number > 9)
		write_number(number / 10);
	write(1, &str[number % 10], 1);
}
int main(int ac, char **av)
{
	int i;
	int a;
	
	
	i = 1;
	while(i <= 100)
	{
		if(i % 5 == 0 && i %  3 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1, "buuz", 5);
		}
		else
		{
			write_number(i);
		}
		write(1, "\n", 1);
		i++;	
	}
	return(0);
}