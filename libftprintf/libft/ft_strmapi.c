/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:24:08 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:24:09 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*newstr;
	size_t	i;

	size = ft_strlen(s);
	newstr = malloc(size + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
#include <stdio.h>

char func(unsigned int i, char c)
{
	return ft_toupper(c);
}

int main()
{
	char *str = "abcd";
	printf("str = %s\n", str);
	char *newstr = ft_strmapi(str, func);
	printf("newstr = %s\n", newstr);
	return 0;
}
*/