##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell find src/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

RM	=	rm -f

CFLAGS	=	 -g3

all:	$(NAME)


$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(CFLAGS)
	$(RM) $(OBJ)
clean:
		rm -f $(OBJ)
		rm -f src/*~
		rm -f *~

fclean: 	clean
		rm -f $(NAME)
		rm -f $(TNAME)

re:		fclean all

.PHONY: all clean fclean re

$(V).SILENT:
