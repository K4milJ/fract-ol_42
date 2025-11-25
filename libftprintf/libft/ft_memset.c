/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:20:30 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/03 13:20:31 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*dst;

	dst = ptr;
	while (n > 0)
	{
		*dst = (unsigned char) c;
		dst++;
		n--;
	}
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>

int main () 
{
   char str[6] = "Hello";//works with this
   //doesn't work when we use char *c = "Hello";

   printf("%s\n",str);

   ft_memset(str, '0', 3);
   printf("%s\n",str);

   memset(str, 'x', 2);
   printf("%s\n",str);
   
   return(0);
}*/