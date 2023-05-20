/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:23:00 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/03 07:25:24 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libc.h>


void print_bits(unsigned char octet)
{
	char bits[32];
	int  i;
	int c = 0;
	int x = 8;

	i = 0;
	while(x)
	{
		bits[i] = octet % 2 + '0';
		octet /= 2;
		i++;
		x--;
	}
	bits[i] = '\0';
	while(i >= 0)
	{
		write(1, &bits[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
// void print_bits(unsigned char octet)
// {
// 	int	i = 8;
// 	unsigned char 	bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }
int main()
{
	print_bits(255);
}