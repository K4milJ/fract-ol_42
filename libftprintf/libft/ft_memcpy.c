/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:48:06 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/03 14:48:10 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest && !src)
		return (dest);
	destination = dest;
	source = (void *) src;
	while (n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main () 
{
   char str[6] = "Hello";
   char dst[6] = "abcde";

   printf("%s\n",str);
   printf("%s\n",dst);

   ft_memcpy(dst, str, 3);
   printf("str = %s\n",str);
   printf("dst = %s\n",dst);

   
   return(0);
}
*/