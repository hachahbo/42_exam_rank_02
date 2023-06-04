/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:32:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/30 23:05:22 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>


int ft_is_space(char c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

void upur_str(char *str)
{
	int i;

	i = 0;
	while(ft_is_space(str[i]))
		i++;
	while(str[i])
	{
		while(ft_is_space(str[i]))
		{
			if(str[i + 1] == '\0')
				break;
			i++;
		}
		if(ft_is_space(str[i - 1]))
			write(1, " ", 1);
		if(!ft_is_space(str[i]))
		{
			write(1, &str[i], 1);
		}
		i++;
	}
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
	if(ac >= 2)
	{
		char *str = av[1];
		char *save;
		char *save2; 
		int i;
		int x;
		
		i= 0;
		if (ac > 2)
		{
			ft_putstr (av[1]);
			write(1, "\n", 1);
			return (0);
		}
		while(ft_is_space(str[i]))
			i++;
		x = i;
		while(!ft_is_space(str[x]))
			x++;
		save = malloc(x *sizeof(char) + 1);
		x = 0;
		while(!ft_is_space(str[i]))
		{
			save[x] = str[i];
			i++;
			x++;
		}
		save[x] = '\0';
		x = 0;
		while(ft_is_space(str[i]))
			i++;
		while(str[x])
			x++;
		save2 = malloc(x *sizeof(char) + 1);
		x = 0;
		while(str[i])
		{
			save2[x] = str[i];
			x++;
			i++;
		}
		save2[x]  = '\0';
		upur_str(save2);
		write(1, " ", 1);
		ft_putstr(save);
		free (save);
		free(save2);
	}
	write(1, "\n", 1);	
}