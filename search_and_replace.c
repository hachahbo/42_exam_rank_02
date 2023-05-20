/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 01:45:18 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/30 01:58:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char a;
	char b;
	
	if (ac == 4 && (!av[2][1] && !av[3][1]))
	{
		a = av[2][0];
		b = av[3][0];
		i = 0;
		if (av[2][i])
		while(av[1][i])
		{
			if(av[1][i] == a)
				av[1][i] = b;
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}