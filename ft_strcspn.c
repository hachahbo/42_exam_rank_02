/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:53:12 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/02 06:49:06 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);	
}

int main()
{
	char str[] = "hamzachahboune0123456789";
	char str1[] = "023456789";
	//size_t i = strcspn(str, str1);
	size_t i = ft_strcspn(str, str1);
	printf("%zu\n", i);
}