/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:32:27 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 17:32:27 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*tempdest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	tempdest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (tempdest);
}

/*
#include <unistd.h>
#include <stdio.h>
int main () 
{
   char *str = "";//works with this
   //doesn't work when we use char *c = "Hello";

   printf("string: %s\n",str);

   char *newstr = ft_strdup(str);
   printf("newstr: %s\n", newstr);
   
   return(0);
}
*/
