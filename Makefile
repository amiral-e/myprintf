##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##


### SOURCES ###
#----c_sources----#
SRC_DIR 	:= ./my_printf/
SRC_NAMES	:= my_printf.c
SRC_NAMES	+= pf_base.c
SRC_NAMES	+= pf_def.c
SRC_NAMES	+= pf_def_p.c
SRC_NAMES	+= pf_smp.c
SRC_NAMES	+= pf_check.c
SRC			:= $(addprefix $(SRC_DIR), $(SRC_NAMES))
#------other------#
OBJ			:= $(SRC:.c=.o)
INC			:= $(realpath ./include/)
#----tests_sources----#
UT_SRC		:= tests/test_my_printf.c
UT_SRC		+= tests/test_my_wrong.c
UT_SRC		+= tests/test_my_padding.c
### SOURCES ###


### COMPILE_USEFULL ###
#----general_usefull----#
CC			=	gcc
#----project_usefull----#
NAME		=	my_printf.a
F_NAME		=	libmy.a
MAKEFLAGS 	+=	--no-print-directory
CFLAGS		:=	-Wall -Wextra
#CFLAGS		+=	-Werror
CFLAGS		+=	-iquote ./include/
#----unit_test_usefull----#
UT_NAME		=	testbin
UT_FLAGS	=	--coverage -lcriterion
LFLAGS		=	-L ./lib/ -lmy
### COMPILE_USEFULL ###


### COLORS ###
ccred		= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\033[0m"
ccyellow	= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\033[0m"
ccend		= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\033[0m"
### COLORS ###


### RULES_USEFULL ###
GCOVR		=	gcovr --exclude tests/
### RULES_USEFULL ###


all:		$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -sC lib/
			ar -x lib/libmy.a
			ar -rc $(F_NAME) *.o $(OBJ)
			$(RM) -rf *.o
			@$(call ccend, "Lib successfully compiled.")

tests_run:	$(UT_NAME)
$(UT_NAME):
			$(MAKE) -sC lib/
			$(CC) $(CFLAGS) $(UT_FLAGS) -o $(UT_NAME) $(SRC) $(UT_SRC) $(LFLAGS)
			@$(call ccend, "Unit tests successfully compiled.")
			./$(UT_NAME)

utest:		tests_run
			$(GCOVR)
			$(GCOVR) --branche
			$(RM) *.gc* $(UT_NAME)

clean:
			$(MAKE) -sC lib/ clean
			$(RM) -rf $(OBJ) $(MAIN_OBJ) $(UT_OBJ) $(NAME) *.gc* *.o *vgcore.*
			@$(call ccyellow, "Lib cleaned.")

fclean:		clean
			$(MAKE) -sC lib/ fclean
			$(RM) -rf $(UT_NAME) $(F_NAME) a.out
			@$(call ccred, "Lib fully cleaned.")

re:			fclean all

.PHONY:		all tests_run utest clean fclean re