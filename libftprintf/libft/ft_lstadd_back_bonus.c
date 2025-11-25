/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:16:35 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 12:16:36 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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

	ft_lstadd_back(&first, new);

	t_list *temp = first;

	while (temp)
	{
		printf("Node content: %d\n", *(int *)(temp->content));
		temp = temp->next;
	}	

	return (0);
}
*/