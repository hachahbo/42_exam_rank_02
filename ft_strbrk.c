/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strbrk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:11:51 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/02 06:07:36 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return(0);
	
}

int main()
{
	char str[] = "hamza123";
	char s[] = "0123456789";
	char *s1 = ft_strpbrk(str, s);
	printf("%s\n", s1);

}
