## fract-ol

Fract-ol is a graphical program that displays and lets the user explore various mathematical fractals. It is implemented in C using the MiniLibX graphics library and provides interactive controls for moving, zooming, and increasing/decreasing level of detail.

## Compilation

To compile the project:

```bash
make
```

This will produce an executable named `fractol`.

To clean object files:

```bash
make clean
```

To remove all binaries and object files:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

## Usage

Project allows to generate Mandelbrot and Julia fractals.

Mandelbrot:

```bash
./fractol mandelbrot
```

Julia:

```bash
./fractol julia <real> <imaginary>
```

You can use arrows/WASD do move the view, scroll to zoom and +/- to increase/decrase the details (iterations).