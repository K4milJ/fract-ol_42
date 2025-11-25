/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:56:13 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/06/10 16:56:15 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	close_handler(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx_connection, fractal->img.img_ptr);
	mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
	mlx_destroy_display(fractal->mlx_connection);
	free(fractal->mlx_connection);
	free(fractal);
	exit(0);
}

int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == K_ESC)
		close_handler(fractal);
	if (keysym == K_D || keysym == K_AR_R)
		fractal->shift_x += (0.5 * fractal->zoom);
	else if (keysym == K_A || keysym == K_AR_L)
		fractal->shift_x -= (0.5 * fractal->zoom);
	else if (keysym == K_S || keysym == K_AR_D)
		fractal->shift_y -= (0.5 * fractal->zoom);
	else if (keysym == K_W || keysym == K_AR_U)
		fractal->shift_y += (0.5 * fractal->zoom);
	else if (keysym == K_NP_PLUS || keysym == K_PLUS)
		fractal->iterations += 10;
	else if (keysym == K_NP_MINUS || keysym == K_MINUS)
		fractal->iterations -= 10;
	fractal_render(fractal);
	return (0);
}

int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	(void)x;
	(void)y;
	if (button == M_SCR_U)
	{
		fractal->zoom *= 0.8;
	}
	else if (button == M_SCR_D)
	{
		fractal->zoom *= 1.2;
	}
	fractal_render(fractal);
	return (0);
}
