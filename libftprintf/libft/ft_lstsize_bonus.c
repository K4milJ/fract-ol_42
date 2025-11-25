/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:59:41 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 11:59:42 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	temp = lst;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
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

	printf("Num of elems = %d\n", ft_lstsize(first));

	// while (temp)
	// {
	// 	printf("Node content: %d\n", *(int *)(temp->content));
	// 	temp = temp->next;
	// }	

	return (0);
}
*/