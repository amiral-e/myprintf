##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##

SRC	= *.c
OBJ	= $(SRC:.c=.o)
NAME	= libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) -rf $(OBJ)

fclean:	clean
	$(RM) -rf $(NAME)

re:	all fclean all