/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:10:21 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/01/17 13:10:22 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_putnbr(int nbr)
{
	char	*str;
	int		numlen;

	str = ft_itoa(nbr);
	numlen = ft_putstr(str);
	free(str);
	return (numlen);
}
