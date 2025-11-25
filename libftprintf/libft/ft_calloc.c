/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:32:19 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 17:32:19 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (size < 1 || nmemb < 1)
		return (malloc(0));
	if (total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
#include <unistd.h>
#include <stdio.h>
int main () 
{
   char str[6] = "Hello";//works with this
   //doesn't work when we use char *str = "Hello";

   printf("string: %s\n",str);

   char *newstr = ft_calloc(0, 1);
   printf("newstr: %s\n", newstr);
   int i = 0;
   while (i < 6)
	{
      printf("write: ");
		write(1, &newstr, 1);
		printf("\n");
		newstr++;
      i++;
	}

   //memset(str, 'x', 2);
   //printf("%s\n",str);
   
   return(0);
}
*/