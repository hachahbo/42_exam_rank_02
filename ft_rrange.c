/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:23:48 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/07 14:34:26 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
int ft_abs(int n)
{
	if(n < 0)
		return (-n);
	return(n);
}
int     *ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int size;

	size = ft_abs(end - start) + 1;
	tab = (int *)malloc(size *sizeof(int));
	if(!tab)
		return(NULL);
	if(size == 1)
	{
		tab[0] = start;
		return(tab);
	}
	i = 0;
	if(start < end)
	{
		while(i < size)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else if(start > end)
	{
		while(i < size)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return (tab);
}
int main()
{
	int start = -1;
	int end = 2;
	int i = 0;
	int size = ft_abs(end - start) + 1;
	int *tab = ft_rrange(start, end);
	while(i < size)
	{
		printf("number (%d) = (%d)\n ", i+1, tab[i]);
		i++;
	}
}