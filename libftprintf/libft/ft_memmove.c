/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:16:41 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/03 15:16:42 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_cpy;
	char	*src_cpy;

	if (!dest && !src)
		return (NULL);
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	if (src_cpy < dest_cpy && dest_cpy < src_cpy + n)
	{
		dest_cpy += n - 1;
		src_cpy += n - 1;
		while (n--)
			*dest_cpy-- = *src_cpy--;
	}
	else
		while (n--)
			*dest_cpy++ = *src_cpy++;
	return (dest);
}

/*

#include <string.h>
#include <stdio.h>

int main () 
{
	// char *str = "Hello";
	// char *dst = "abcde";

	char str[] = "Hello";
	char dst[] = "abcde";
	printf("ORIGINAL:\n");
	printf("str = %s\n",str);
	printf("dst = %s\n",dst);

	ft_memmove(dst, str, 3);
	printf("CHANGED:\n");
	printf("str = %s\n",str);
	printf("dst = %s\n",dst);

	return(0);
}
*/
