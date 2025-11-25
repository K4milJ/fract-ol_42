/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:23:28 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:23:28 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	num_of_words(const char *s, char c)
{
	int	elements;

	elements = 0;
	while (*s)
	{
		if (*s != c)
		{
			elements++;
			while (*(s + 1) && *s != c)
				s++;
		}
		s++;
	}
	return (elements);
}

static int	find_end_index(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int	array_creation(char **words, char const *s, char c, int words_num)
{
	int	start_index;
	int	end_index;
	int	i;

	start_index = 0;
	i = 0;
	while (i < words_num)
	{
		while (s[start_index] == c)
			start_index++;
		end_index = find_end_index(s + start_index, c);
		words[i] = ft_substr(s, start_index, end_index);
		if (!words[i])
		{
			while (i-- > 0)
				free(words[i]);
			free(words);
			return (0);
		}
		start_index += end_index;
		i++;
	}
	words[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		words_num;

	if (!s)
		return (NULL);
	words_num = num_of_words(s, c);
	words = (char **)malloc(sizeof(char *) * (words_num + 1));
	if (!words)
		return (NULL);
	if (array_creation(words, s, c, words_num) == 0)
		return (NULL);
	return (words);
}

/*

#include <stdio.h>
int main()
{
	char *str = "xxxHelloxxworldxxabc";
	char c = 'x';

	printf("str: %s\n", str);
	printf("delim char: %c\n", c);
	char **res = ft_split(str, c);
	int i = 0;
	while (i < 3)
	{
		printf("%s\n", res[i]);
		i++;
	}

	return 0;
}
*/