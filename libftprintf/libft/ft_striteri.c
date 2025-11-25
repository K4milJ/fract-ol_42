/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:24:33 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:24:34 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void func(unsigned int i, char *c)
{
	printf("%c\n", c[i]);
}

int main()
{
	char *str = "abcdefgh";
	printf("str = %s\n", str);
	ft_striteri(str, &func);
	printf("newstr = %s\n", str);
	return 0;
}
*/