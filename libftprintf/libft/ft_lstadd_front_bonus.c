/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:37:04 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 11:37:04 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int v1 = 10, v2 = 20, v3=40;
	t_list *first = ft_lstnew(&v1);
    first->next = ft_lstnew(&v2);

	t_list *new = ft_lstnew(&v3);

	ft_lstadd_front(&first, new);

	t_list *temp = first;

	while (temp)
	{
		printf("Node content: %d\n", *(int *)(temp->content));
		temp = temp->next;
	}	

	return (0);
}
*/