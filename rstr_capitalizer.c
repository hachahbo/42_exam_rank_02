/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:35:21 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/24 08:21:12 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	int i;
	int j;

	if(ac >= 2)
	{
		i = 1;
		while(i < ac)
		{
			j = 0;
			while(av[i][j])
			{
				if(av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
				j++;
				
			}
			j = 0;
			while(av[i][j])
			{
				if((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j+ 1] == ' ' || av[i][j + 1] == '\0'))
					av[i][j] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}