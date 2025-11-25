/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjamrosz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:56:06 by kjamrosz          #+#    #+#             */
/*   Updated: 2025/06/10 16:56:07 by kjamrosz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libftprintf/ft_printf.h"
# include "../minilibx-linux/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <X11/X.h>
# include <X11/keysym.h>

# define K_W 119
# define K_A 97
# define K_S 115
# define K_D 100
# define K_AR_L 65361
# define K_AR_U 65362
# define K_AR_R 65363
# define K_AR_D 65364
# define K_ESC		65307
# define K_NP_MINUS	65453
# define K_NP_PLUS	65451
# define K_PLUS		61
# define K_MINUS	45

# define M_SCR_U	4
# define M_SCR_D	5

# define WIDTH		800
# define HEIGHT		800

# define BLACK		0x000000
# define WHITE		0xFFFFFF

typedef struct s_complex
{
	double	re;
	double	im;
}	t_complex;

typedef struct s_img
{
	void	*img_ptr;
	char	*pixels_ptr;
	int		bpp;
	int		endian;
	int		line_len;
}	t_img;

typedef struct s_fractal
{
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
	char	*name;
	double	escape_value;
	int		iterations;
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}	t_fractal;

void		fractal_init(t_fractal *fractal);
void		fractal_render(t_fractal *fractal);
double		map(double unscaled_num, char *str, double old_min, double old_max);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);
double		atod(char *s);

int			key_handler(int keysym, t_fractal *fractal);
int			close_handler(t_fractal *fractal);
int			mouse_handler(int button, int x, int y, t_fractal *fractal);

void		events_init(t_fractal *fractal);
void		data_init(t_fractal *fractal);
int			error_display(t_fractal *fractal);

#endif
