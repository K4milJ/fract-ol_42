/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:26:24 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 14:26:24 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;
	unsigned char	uc;

	temp = (unsigned char *) str;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*temp == uc)
			return (temp);
		temp++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char c = '\0';
	char* str = "qwerty\0asd";
	char* newstr = ft_memchr(str, c, 10);
	printf("%s\n", newstr);
	newstr++;
	printf("%s\n", newstr);
	return 0;
}
*/