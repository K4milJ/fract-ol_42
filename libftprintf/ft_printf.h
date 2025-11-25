/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:49:17 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/01/05 14:49:18 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_putchar(int c);
int	ft_puthex(unsigned int n, char c);
int	ft_putnbr(int nbr);
int	ft_putptr(unsigned long long ptr);
int	ft_putstr(char *str);
int	ft_putuint(unsigned int nbr);

#endif