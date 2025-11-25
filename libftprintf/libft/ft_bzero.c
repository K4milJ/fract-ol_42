/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:37:09 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/03 14:37:12 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;

	dst = s;
	while (n > 0)
	{
		*dst = '\0';
		dst++;
		n--;
	}
}

/*
#include <string.h>
#include <stdio.h>
int main () 
{
   char str[6] = "Hello";//works with this
   //doesn't work when we use char *c = "Hello";

   printf("%s\n",str);

   ft_bzero(str, 3);
   printf("%s\n",str);
   
   return(0);
}
*/