/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:40:13 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 14:57:37 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int main(int ac, char **av)
{
	int i;

	if(ac == 2)
	{
		i = 0;
		while(is_space(av[1][i]))
			i++;
		while(av[1][i] >= 32 && av[1][i] <= 127)
		{
			while(is_space(av[1][i]))
			{
				if(av[1][i + 1] == '\0')
					break;
				i++;
			}
			if(is_space(av[1][i - 1]) && av[1][i + 1] != '\0')
			{
				int x = 3;
				while(x)
				{
					write(1, " ", 1);
					x--;
				}
			}
			if(av[1][i]>= 33 && av[1][i] <= 127)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}