/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:21:40 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/31 09:14:30 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);	
}
char    *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	len = ft_strlen(str);
	i = 0; 
	while(i <  len/2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);
}
int main()
{
	char str[] = "hamza";
	ft_strrev(str);

	printf("%s\n", str);
} 