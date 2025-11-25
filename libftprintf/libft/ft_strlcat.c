/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:47:07 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/05 10:47:08 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, unsigned int size)
{
	size_t	src_len;
	size_t	dst_len;

	if (!dst && !size)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}

/*
#include <stdio.h>

int main() {
    char dest[6] = "Hello";
    char src[] = ", world!";
    unsigned int size = sizeof(dest);

    unsigned int total_length = ft_strlcat(dest, src, size);
    printf("Result: %s\n", dest); // Output: Hello, world!
    printf("Total length: %u\n", total_length); // Output: 13

    return 0;
}
*/