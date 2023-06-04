/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:38:12 by hachahbo          #+#    #+#             */
/*   Updated: 2023/06/01 08:11:35 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_wc(char *str)
{
	int i;
	int counter;
	
	i = 0;
	counter = 0;
	while(str[i])
	{
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' && str[i])
			i++;
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			counter++;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
	}
	return (counter);
}
char *ft_substr(char *str, int start, int len)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(char) * len + 1);
	while(i < len)
	{
		s[i] = str[start + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
void d_free(char **str)
{
	int i;
	while(str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
char    **ft_split(char *str)
{
	char **str_split;
	char *s;
	int start;
	int end;
	int i;

	int wc = ft_wc(str);
	str_split = (char **)malloc(sizeof(char *) * (wc + 1));
	if(!str_split)
	{
		d_free(str_split);
		return (NULL);
	}
	start = 0;
	i = 0;
	while(i < wc)
	{
		while(str[start] == ' ' || str[start] == '\t' || str[start] == '\n' && str[start])
			start++;
		end = start;
		while(str[end] != ' ' && str[end] != '\t' && str[end] != '\n' && str[end])
				end++;
		s = ft_substr(str, start, end - start);
		start = end;
		str_split[i] = s;
		i++;
	}
	*(str_split + i) = NULL;
	return (str_split);
}