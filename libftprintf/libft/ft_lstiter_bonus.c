/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:58:33 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 14:58:34 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

/*
#include <stdio.h>
void func(void *lst)
{
	int *num;

	num = (int *)(lst);
	printf("%d\n", *num+2);
}


int main()
{
	int v1 = 10, v2 = 20, v3 = 30;
	t_list *first = ft_lstnew(&v1);
    first->next = ft_lstnew(&v2);
    first->next->next = ft_lstnew(&v3);
	// This will create: 10 -> 20 -> 30 -> NULL

	t_list *temp = first;

	ft_lstiter(first, &func);

	return (0);
}
*/