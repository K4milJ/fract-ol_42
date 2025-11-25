.PHONY: all clean

SRC = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup)

OBJS := $(SRC:%.c=%.o)

SUPP_SRC = $(addsuffix .c, ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd)

SUPP_OBJS := $(SUPP_SRC:%.c=%.o)

BONUS_SRC = $(addsuffix _bonus.c, ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap)

BONUS_OBJS := $(BONUS_SRC:%.c=%.o)

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR = .

CPPFLAGS = -I$(INC_DIR)

RM = rm -f

ARNAME = ar rcs $(NAME)

RANNAME = ranlib $(NAME)

OBJS_ALL = $(OBJS) $(SUPP_OBJS) $(BONUS_OBJS)

OBJ_BAS = $(OBJS) $(SUPP_OBJS)

SRC_ALL = $(SRC) $(SUPP_SRC) $(BONUS_SRC)

all: $(NAME)

$(NAME): $(OBJ_BAS)
	$(ARNAME) $(OBJ_BAS)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS_ALL)
	$(ARNAME) $(OBJS_ALL)
	$(RANNAME)
