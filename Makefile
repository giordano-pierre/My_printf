##
## EPITECH PROJECT, 2022
## B-CPE-101-LYN-1-1-myprintf-nathan.baudelin
## File description:
## Makefile
##

SRC =	my_printf.c \
		create_array.c	\
		print_flag.c	\
		print_int.c	\
		put_int.c	\
		print_str.c	\
		put_str.c	\
		print_float.c	\
		put_float.c	\
		put_scientific.c	\
		print_rest.c	\
		put_rest.c	\
		utile.c	\
		print_special.c \
		compteur.c	\
		print_space.c	\
		compteur2.c	\
		print_flag_space.c	\
		utile_2.c	\
		call_special.c	\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
