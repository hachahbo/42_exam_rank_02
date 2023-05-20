/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 01:11:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/03 01:28:29 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);	
}

int main(int ac, char **av)
{
	char *s1;
	char *s2;
	char hash[256] = {0};

	if(ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		while(*s1)
		{
			if(hash[(int)*s1]== 0)
			{
				ft_putchar(*s1);
				hash[(int)*s1] = 1;
			}
			s1++;
		}
		while(*s2)
		{
			if(hash[(int)*s2] == 0)
			{
				ft_putchar(*s2);
				hash[(int)*s2] = 1;
			}
			s2++;
		}
		write(1, "\n", 1);
	}
}