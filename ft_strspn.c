/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 06:09:40 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/02 22:29:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(accept[j])
		{
			if(s[i] == accept[j])
				break;
			j++; 
		}
		if (accept[j] == '\0')
			break;

		i++;
	}
	return(i);
}
int main()
{
	char str[] = "12h23amza99";
	char s[] = "0123456789";
	size_t a = ft_strspn(str, s);
	printf("%zu\n", a);
	
}