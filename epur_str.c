/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:31:24 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/30 19:52:03 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
int is_space(char c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
int main(int ac, char **av)
{
	int i;

	if(ac == 2)
	{
		i = 0;
		while(is_space(av[1][i]))
				i++;
		while((av[1][i] >= 32 && av[1][i] <= 127))
		{
			while (is_space(av[1][i]))
			{	
				if(av[1][i + 1] == '\0')
					break;
				i++;
			}
			if(is_space(av[1][i - 1]))
			{
				write(1, " ", 1);
			}
			if(av[1][i] >= 33 && av[1][i] <= 127)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}