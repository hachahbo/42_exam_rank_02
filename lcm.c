/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:36:40 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/10 14:01:44 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if(a == 0 || b == 0)
		return(0);
	if(a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(n % b == 0 && n % a == 0)
			return (n);
		n++;
	}
	return (0);
}
int main()
{
	printf("%d", lcm(8, 5));
} 