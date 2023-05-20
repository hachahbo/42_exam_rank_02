/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:34:39 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/02 00:51:19 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	char *cp;
	int  i;
	int size = ft_strlen(src);
	cp = (char *)malloc(size + 1);
	if(!cp)
	{
		free(cp);
		return(0);
	}
	i = 0;
	while(src[i])
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

int main()
{
	char str[] = "hamza";
	char *cp ;
	cp = ft_strdup(str);
	printf("dup : %s\n", cp);
}
