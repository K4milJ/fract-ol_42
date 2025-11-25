/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:18:00 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:18:02 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;
	size_t	alloc_space;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		alloc_space = strlen - start;
	else
		alloc_space = len;
	substr = malloc(alloc_space + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include <unistd.h>
#include <stdio.h>
int main () 
{
	char *str = "Helloworld!";

	printf("string: %s\n",str);
	printf("strlen: %d\n",ft_strlen(str)+1);
	char *newstr = ft_substr(str, 3, 9);
	printf("newstr: %s\n", newstr);

	return(0);
}
*/