/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:59:46 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/05 12:59:46 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*temp;
	char			*res;
	unsigned char	cc;

	res = NULL;
	temp = (char *) str;
	cc = (unsigned char) c;
	if (c == 0 && *temp)
		return (temp + ft_strlen(temp));
	if (c == 0 && !temp)
		return (temp);
	while (*temp)
	{
		if (*temp == cc)
			res = temp;
		temp++;
	}
	if (c == *temp)
		return (temp);
	return (res);
}

/*
#include <stdio.h>
int main()
{
	char c = 'l';
	char* str = "Hello world!";
	printf("%s\n", ft_strrchr(str, c));
	return 0;
}
*/