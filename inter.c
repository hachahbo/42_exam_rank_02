/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 00:56:21 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/03 01:07:37 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
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
		while(*s2)
		{
			hash[(int)*s2] = 1;
			s2++;
		}
		while(*s1)
		{
			if(hash[(int)*s1]== 1)
			{
				ft_putchar(*s1);
				hash[(int)*s1] = 0;
			}
			s1++;
		}
		write(1, "\n", 1);
	}
}