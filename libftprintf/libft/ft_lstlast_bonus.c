/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:07:05 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 12:07:06 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!lst)
		return (lst);
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

/*
#include <stdio.h>
int main()
{
	int v1 = 10, v2 = 20, v3 = 30;
	t_list *first = ft_lstnew(&v1);
    first->next = ft_lstnew(&v2);
    first->next->next = ft_lstnew(&v3);
	// This will create: 10 -> 20 -> 30 -> NULL

	t_list *temp = first;
	t_list *temp2 = first;
	//printf("Num of elems = %d\n", ft_lstsize(first));

	t_list *last = ft_lstlast(first);

	printf("last = %d\n", *(int *)(last->content));

	while (temp2)
	{
		printf("Node content: %d\n", *(int *)(temp2->content));
		temp2 = temp2->next;
	}	

	return (0);
}
*/