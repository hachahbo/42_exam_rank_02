/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:09:34 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/23 16:31:05 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main(int ac, char **av)
{
	int i;
	
	if(ac == 2)
	{
		i = 0;
		while(av[1][i] == 9 || av[1][i] == 32)
			i++;
		while(!(av[1][i] == 9 || av[1][i] == 32))
		{
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}