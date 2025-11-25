/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:54:52 by kjamrosz          #+#    #+#             */
/*   Updated: 2024/12/06 15:54:53 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i++] - '0');
	}
	return (result * sign);
}

/*
#include <stdio.h>
int main()
{
	char *str1 = "     +254m6";
	char *str2 = "  -2546";
	char *str3 = "     1234";
	char *str4 = "vnifjeh";
	char *str5 = "  dfbueeiw";
	char *str6 = "0";
	char *str7 = "-2147483648";//MAX_VAL
	char *str8 = "2147483647";//MIN_VAL

	printf("result: %d\n", ft_atoi(str1));
	printf("result: %d\n", ft_atoi(str2));
	printf("result: %d\n", ft_atoi(str3));
	printf("result: %d\n", ft_atoi(str4));
	printf("result: %d\n", ft_atoi(str5));
	printf("result: %d\n", ft_atoi(str6));
	printf("result: %d\n", ft_atoi(str7));
	printf("result: %d\n", ft_atoi(str8));

	return 0;
}
*/