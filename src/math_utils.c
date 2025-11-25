/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:56:41 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/06/10 16:56:43 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

double	map(double unscaled_num, char *str, double old_min, double old_max)
{
	if (!ft_strncmp(str, "re", 2))
	{
		return ((2 + 2) * (unscaled_num - old_min) / (old_max - old_min) - 2);
	}
	else if (!ft_strncmp(str, "im", 2))
	{
		return ((-2 - 2) * (unscaled_num - old_min) / (old_max - old_min) + 2);
	}
	else if (!ft_strncmp(str, "color", 2))
	{
		return ((WHITE - BLACK) * \
				(unscaled_num - old_min) / (old_max - old_min) + BLACK);
	}
	else
		return (0);
}

t_complex	sum_complex(t_complex z1, t_complex z2)
{
	t_complex	result;

	result.re = z1.re + z2.re;
	result.im = z1.im + z2.im;
	return (result);
}

t_complex	square_complex(t_complex z)
{
	t_complex	result;

	result.re = (z.re * z.re) - (z.im * z.im);
	result.im = 2 * z.re * z.im;
	return (result);
}

double	atod(char *s)
{
	long	integer_part;
	double	fractional_part;
	double	pow;
	int		sign;

	integer_part = 0;
	fractional_part = 0;
	sign = +1;
	pow = 1;
	while ((*s >= 9 && *s <= 13) || 32 == *s)
		++s;
	while ('+' == *s || '-' == *s)
		if ('-' == *s++)
			sign = -sign;
	while (*s != '.' && *s)
		integer_part = (integer_part * 10) + (*s++ - 48);
	if ('.' == *s)
		++s;
	while (*s)
	{
		pow /= 10;
		fractional_part = fractional_part + (*s++ - 48) * pow;
	}
	return ((integer_part + fractional_part) * sign);
}
