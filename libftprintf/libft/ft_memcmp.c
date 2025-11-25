/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:38:09 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 14:38:10 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*str1 != *str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	int	n = 6;
	char* s1 = "Hel\0lo";
	char* s2 = "Hel\0lo";
	printf("%d\n", ft_memcmp(s1, s2, n));
	return 0;
}
*/