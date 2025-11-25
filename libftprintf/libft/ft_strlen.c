/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:46:36 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/03 11:46:37 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int		size;
	char	*temp;

	temp = (char *) str;
	size = 0;
	while (*temp)
	{
		size++;
		temp++;
	}
	return (size);
}
