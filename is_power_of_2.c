/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:02:06 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/03 03:12:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int  is_power_of_2(unsigned int n)
{
	int number = 1;

	while(number <= n)
	{
		if(number == n)
			return (1);
		number *= 2;
	}
	return (0);
}
int main()
{
	int a = 21;
	if(is_power_of_2(a))
		printf("%d is power of 2 \n", a);
	else
		printf("%d isn't  power of 2\n", a);
}