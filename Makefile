##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./source/my_printf.c	\
		./source/my_put_nbr.c	\
		./source/my_putchar.c	\
		./source/my_putstr.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I./include/

NAME	=	libmy.a

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
