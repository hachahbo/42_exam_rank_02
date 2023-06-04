/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:06:10 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/23 17:45:43 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>


unsigned char	swap_bits(unsigned char octet)
{
	int i;
	int bits = 8;
	int x;
	unsigned char str[32];
	char temp;
	unsigned char c;

	i = 0;
	while (i < 8)
	{
		str[i] = octet % 2 + '0';
		octet /= 2;
		i++;
	}
	printf("str : %s\n", str);
	bits = 8;
	x = bits / 2;
	i = 0;
	while (i < bits / 2)
	{
		temp = str[i];
		str[i] = str[x];
		str[x] = temp;
		i++;
		x++;
	}
	printf("str : %s\n", str);
	printf("\n");
	// bits = 7;
	// while(bits >= 0)
	// {
	// 	write(1, &str[bits], 1);
	// 	bits--;
	// }
	i = 0;
	c = 0;
	bits = 7;
	while(bits >= 0)
	{
		if(str[bits]== '1')
			c  = c * 2 + 1;
		else if (str[bits] == '0')
			c = c *2;
		bits--;
	}
	return (c);
}
int main()
{
	char a = 'a';

	printf("\n%c\n", swap_bits(100));
}