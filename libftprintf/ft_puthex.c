/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:19:23 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/02/07 14:19:23 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_puthex(unsigned int num, char c)
{
	int	count;

	count = 0;
	count += ft_hexlen(num);
	if (num == 0)
		return (ft_putchar('0'));
	if (num >= 16)
	{
		ft_puthex(num / 16, c);
		ft_puthex(num % 16, c);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (c == 'x')
				ft_putchar((num - 10 + 'a'));
			if (c == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
	return (count);
}
