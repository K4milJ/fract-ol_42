/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:16:35 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/17 15:16:36 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}

/*
//this is not a test code to this task.
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