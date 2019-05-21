##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_sokoban
##

SRC	=	src/main.c			\
		src/my_putstr.c			\
		src/my_dash_h_options.c		\
		src/my_error_check_first.c	\
		src/my_sokoban.c		\
		src/my_get_number_of.c		\
		src/my_file_check.c		\
		src/my_sokoban_game.c		\
		src/my_map_printer.c		\
		src/my_moving_player.c		\
		src/my_get_player_position.c	\
		src/my_player_repos.c		\
		src/my_double_str_cpy.c		\
		src/my_strlen.c			\
		src/my_holes_check.c		\
		src/my_cases.c

NAME	=	my_sokoban

CFLAGS	=	-Wall -Wextra -I./include

OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(NAME) $(OBJ) -I./include -lncurses

clean:
	rm -rf $(OBJ)	\
	rm *~

fclean:	clean
	rm -rf $(NAME)	\
	rm *~		\
	rm *.a

re: fclean all

.PHONY: all clean fclean re
