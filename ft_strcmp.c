/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:13:02 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/31 11:18:52 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i; 

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2 [i])
		i++;
	return(s1[i] - s2[i]);
}
int main()
{
	char str[] = "hamzz";
	char str1[] = "hamza";
	int i = ft_strcmp(str, str1);
	printf("%d", i);
}