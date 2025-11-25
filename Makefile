NAME = fractol

LIBFTPRINTF = libftprintf/libftprintf.a
LIBFTPRINTF_DIR = libftprintf/

CC		=	cc
CCFLAGS =	-Wall -Wextra -Werror
RM		=	rm -f

SRC_BAZ =	fractol init math_utils render events
SRC 	=	$(addsuffix .c, $(addprefix src/, $(SRC_BAZ)))

OBJ_DIR	=	obj
OBJ		=	$(SRC:src/%.c=$(OBJ_DIR)/%.o)

INCLS	=	-I ./includes -I $(MLX_PATH)

MLX_PATH				=	./minilibx-linux
MLX						=	$(MLX_PATH)/libmlx_Linux.a
MLXFLAGS				=	-L minilibx-linux/ -lmlx_Linux -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFTPRINTF) $(MLX)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME) -L$(LIBFTPRINTF_DIR) -lftprintf $(MLXFLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(MLX):
	$(MAKE) -C $(MLX_PATH)

$(LIBFTPRINTF):
	$(MAKE) -C $(LIBFTPRINTF_DIR)

$(OBJ_DIR)/%.o: src/%.c
	$(CC) $(CCFLAGS) $(INCLS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFTPRINTF_DIR)
	$(MAKE) clean -C $(MLX_PATH)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFTPRINTF_DIR)
	$(MAKE) clean -C $(MLX_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re