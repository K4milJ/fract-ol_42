/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:51:07 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 14:51:08 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!*little)
		return ((char *)big);
	i = 0;
	j = 0;
	needle_len = ft_strlen(little);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j])
			j++;
		if (j == needle_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char *big = "Hello, worldee!";
	char *little = "";
	int len = 14;
	char *result = ft_strnstr(big, little, len);

	if (result)
	{
		printf("Found: %s\n", result); // Output: Found: world!
	}
	else
	{
		printf("NULL\n");
	}
	return 0;
}
*/
