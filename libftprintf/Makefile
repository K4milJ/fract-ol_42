NAME = libftprintf.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -f

ARNAME = ar rcs

SRC = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putuint.c

OBJECTS = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) 
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(ARNAME) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJECTS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re
