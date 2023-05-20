/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:29:34 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 03:13:38 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <libc.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
		return(i);
}
void ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int len;
	int match;
	int j;

	if(ac == 3)
	{
		len = ft_strlen(av[1]);
		i = 0;
		match = 0;
		j = 0;
		while(av[1][i])
		{
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
				{
					match++;
					break;
				}
				j++;
			}
			i++;
		}
		if(len == match)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}