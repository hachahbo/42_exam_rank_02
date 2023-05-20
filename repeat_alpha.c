/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:03:11 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/30 06:17:31 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libc.h>

int main(int ac, char **av)
{
	int i;
	int x;

	if(ac == 2)
	{
		i = 0;
		x = 0;
		while(av[1][i])
		{
			if((av[1][i] >= 'a' && av[1][i] <= 'z' )||(av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				x = av[1][i] - 'a';
				while(x >= 0)
				{
					write(1, &av[1][i], 1);
					x--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}