/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:49:47 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/04 16:30:25 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

t_list *lst_new(void *data)
{
	t_list  *list;

	list = (t_list *)malloc(sizeof(t_list));
	if(!list)
		return(0);
	list->data = data;
	list->next = NULL;
	return(list);
}
void ft_add_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
int	ft_list_size(t_list *begin_list)
{
	t_list *size;
	int i;
	
	size = begin_list;
	i = 0;
	while(size)
	{
		size = size->next; 
		i++;
	}
	return(i);
}
int main()
{
	t_list *head = NULL;
	
	
	t_list *node1 = lst_new("1");
	t_list *node2 = lst_new("2");
	t_list *node3 = lst_new("3");
	printf("hamza");
	ft_add_front(&head, node1);
	ft_add_front(&head, node2);
	ft_add_front(&head, node3);
	printf("\n %s, \n", head->data);
	int x = ft_list_size(head);
	while(head)
	{
		printf("%s || ", head->data);
		head=head->next;
	}
	printf("\n%d", x);
	
}