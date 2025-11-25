/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:32:59 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 10:33:00 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
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

	while (temp)
	{
		printf("Node content: %d\n", *(int *)(temp->content));
		temp = temp->next;
	}	

	return (0);
}
*/