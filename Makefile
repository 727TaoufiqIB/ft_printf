SRC = ft_printf.c ft_putchar.c ft_putnbr_ubase.c ft_putnbr_lbase.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_strlen.c

OBJ = $(SRC:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
	ar rcs $(NAME) $@

$(NAME) : $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)