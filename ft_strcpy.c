/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:39:35 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/23 16:32:47 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return(s1);
}

int main()
{
	char str[] = "hamzalgjaeklgadlg,ad; ";
	char str2[]= "chahboune";
	
	char *s = ft_strcpy(str, str2);
	printf("%s\n", s);
	return(0);
}
