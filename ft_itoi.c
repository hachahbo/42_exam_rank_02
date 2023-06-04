/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:56:45 by hachahbo          #+#    #+#             */
/*   Updated: 2023/06/01 08:21:35 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_len(long nb)
{
	int i;

	i = 0;
	if(nb < 0)
	{
		nb *= -1;
		i++;
	}
	while(nb)
	{
		nb = nb / 10;
		i++;
	}
	return(i);
}
char	*ft_itoa(int nbr)
{
	long nb;
	char *str;
	int size;
	
	nb = nbr;
	size = ft_len(nb);
	str = (char *)malloc(size);
	str[size] = '\0';
	size--;
	if(nb == 0)
	{
		str[0] = '0';
		return(str);
	}
	if(nb < 0)
	{
		str[0] = '-';
		nb *= - 1; 
	}
	while(nb)
	{
		str[size] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return(str);
}
int main()
{
	printf("%s", ft_itoa(1000000));
}