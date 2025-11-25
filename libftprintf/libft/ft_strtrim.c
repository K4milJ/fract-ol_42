/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:22:36 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:22:37 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end >= 0 && is_in_set(s1[end], set))
		end--;
	if (start > end)
		return (ft_strdup(""));
	newstr = malloc(sizeof(char) * (end - start + 2));
	if (!newstr)
		return (NULL);
	i = 0;
	while (start <= end)
		newstr[i++] = s1[start++];
	newstr[i] = '\0';
	return (newstr);
}

/*
#include <stdio.h>
int main()
{
	char *set = "abc";
	char *str = "aaccbbHellobbacca";
	
	printf("original string: %s\n", str);
	printf("set of unwanted chars: %s\n", set);
	
	printf("New string: %s\n", ft_strtrim(str, set));

	return 0;
}
*/