/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:47:35 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/07 12:26:17 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int ft_abs(int n)
{
	if(n < 0)
		return(-n);
	return (n);
}
int  *ft_range(int start, int end)
{
	int  *tab;
	int size;
	int  i;

	size = ft_abs(end - start) + 1;
	tab = (int *)malloc(size * sizeof(int));
	if(!tab)
		return (NULL);
	i = 0;
	if(size == 1)
	{
		tab[0] = start;
		return(tab);
	}
	if(start < end)
	{
		while(i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	else  if(start > end)
	{
		while(i  < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}

int main()
{
	int  i;
	int start = 0;
	int end = -5;
	int size = ft_abs(end - start) + 1;
	printf("%d\n", size);
	int *tab = ft_range(start,  end);
	printf("start : \n");
	i = 0;
	while(i < size)
	{
		printf("number (%d) =  %d\n", i+1, tab[i]);
		i++;
	}
	printf("end \n");
	
	
}