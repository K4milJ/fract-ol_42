/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:27:10 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/10 13:27:11 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			n += (char) '0';
			write(fd, &n, 1);
		}
	}
}

/*
#include <stdio.h>
int	main (void)
{
	int n = 12343;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = -12343;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = -2147483648;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = 2147483647;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = 0;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = -1;
	ft_putnbr_fd(n, 1);
	printf("\n");
	n = -10;
	ft_putnbr_fd(n, 1);
	printf("\n");
	return (0);
}
*/