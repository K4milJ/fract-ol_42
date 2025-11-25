/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:42:08 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/05 10:42:09 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (src_len);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int main() {
    char dst[6] = "Hello";
    char src[] = ", world!";
    unsigned int size = sizeof(dst);
	printf("dst: %s\n", dst);
	printf("src: %s\n", src);
	printf("USING FUNCTION\n");
    unsigned int total_length = ft_strlcpy(dst, src, size);
	printf("src: %s\n", src);
    printf("dst: %s\n", dst); // Output: Hello, world!
    printf("Total length: %u\n", total_length); // Output: 13

	printf("-----------------------\n");
	// printf("USING biult-in FUNCTION\n");

	// char dst2[6] = "Hello";
    // char src2[] = ", world!";
	// printf("dst: %s\n", dst2);
	// printf("src: %s\n", src2);
	// printf("USING strlcpy()\n");
    // total_length = strlcpy(dst2, src2, 8);
	// printf("src: %s\n", src2);
    // printf("dst: %s\n", dst2); // Output: Hello, world!
    // printf("Total length: %u\n", total_length); // Output: 13

    return 0;
}
*/