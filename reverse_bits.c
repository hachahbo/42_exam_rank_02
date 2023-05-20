/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 05:08:02 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 01:51:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

unsigned char	reverse_bits(unsigned char octet)
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
	i = 0;
	while(bits[i])
	{
		write(1, &bits[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while(bits[i])
	{
		if(bits[i] == '1')
		{
			c = (c * 2) + 1;
		}
		else if(bits[i] == '0')
		{
			c = (c * 2);
		}
		i++;
	}
	return (c);
}
int main()
{
	unsigned char c = 'x';
	printf("befror reverse %c\n", c);
	printf("reverse bits : \n");
	unsigned char x = reverse_bits(c);
	printf("%d\n", x);
}