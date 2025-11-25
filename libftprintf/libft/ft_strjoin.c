/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:22:10 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:22:11 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*tempresult;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	tempresult = result;
	while (*s1)
		*(result++) = *(s1++);
	while (*s2)
		*(result++) = *(s2++);
	*result = '\0';
	return (tempresult);
}

/*
#include <unistd.h>
#include <stdio.h>

int main () 
{
	char *str1 = "Hello";
	char *str2 = "world";

	printf("string 1: %s\n",str1);
	printf("string 2: %s\n",str2);
	//printf("strlen: %d\n",ft_strlen(str)+1);
	char *newstr = ft_strjoin(str1, str2);
	printf("newstr: %s\n", newstr);

	return(0);
}
*/