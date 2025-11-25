/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:48:52 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/01/05 14:48:55 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "ft_printf.h"

static int	which_specifier(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		count += ft_putptr(va_arg(args, unsigned long long));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putuint(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), c);
	if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	index_input;
	size_t	count;

	va_start(args, input);
	index_input = 0;
	count = 0;
	while (input[index_input])
	{
		if (input[index_input] == '%')
		{
			count += which_specifier(input[index_input + 1], args);
			index_input++;
		}
		else
			count += ft_putchar(input[index_input]);
		index_input++;
	}
	va_end (args);
	return (count);
}

/*
int	main(void)
{
	int count;
	int num = 25;

	count = ft_printf("Hel%dlo", num);
	printf("\ncount = %d\n", count);

	count = ft_printf("Hel%%lo", num);
	printf("\ncount = %d\n", count);

	return (0);
}
*/