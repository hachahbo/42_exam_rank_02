/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:13:41 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/03 03:21:41 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
int		max(int* tab, unsigned int len)
{
	int max;
	int i;
	
	if(!tab)
		return (0);
	max = tab[0];
	i = 1;
	while(i < len)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
		i++;
	}
	return(max);
}
int main(int ac , char **av)
{
	int tab[] = {1, 5, 8, 10, 13, 9, 10, 33, 3, 2};
	int ma = max(NULL, 10);
	printf("max : %d\n", ma);
}