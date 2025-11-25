/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:56:22 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/06/10 16:56:23 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	error_display(t_fractal *fractal)
{
	ft_printf("Available parameters:\n");
	ft_printf("./fractol mandelbrot\n");
	ft_printf("./fractol julia <real> <imaginary>\n");
	free(fractal);
	exit(1);
}

int	input_error(char *str)
{
	if (!(*str == '+' || *str == '-' || (*str >= '0' && *str <= '9')))
		return (1);
	if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (*++str)
	{
		if (!((*str >= '0' && *str <= '9') || *str == '.'))
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_fractal	*fractal;

	fractal = malloc(sizeof(t_fractal));
	if ((argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10)) \
	|| (argc == 4 && !ft_strncmp(argv[1], "julia", 5)))
	{
		fractal->name = argv[1];
		if (!ft_strncmp(argv[1], "julia", 5))
		{
			if (input_error(argv[2]) || input_error(argv[3]))
				error_display(fractal);
			fractal->julia_x = atod(argv[2]);
			fractal->julia_y = atod(argv[3]);
		}
		data_init(fractal);
		fractal_init(fractal);
		fractal_render(fractal);
		mlx_loop(fractal->mlx_connection);
	}
	else
		error_display(fractal);
	return (0);
}
