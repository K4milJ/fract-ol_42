/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:43:19 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/05 12:43:21 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*temp;
	unsigned char	cc;

	temp = (char *) str;
	cc = (unsigned char) c;
	if (!cc)
		return (temp + ft_strlen(str));
	while (*temp)
	{
		if (*temp == cc)
			return (temp);
		temp++;
	}
	if (!temp)
		return (temp);
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char c = 'a';
	char* str = "qwertyasd";
	printf("%s\n", ft_strchr(str, c));
	return 0;
}
*/