##
## EPITECH PROJECT, 2020
## CPE_dante_2019 [WSL: Debian]
## File description:
## Makefile
##

SRC	=	source/main.c

OBJ	=	$(SRC:.c=.o)

directory 			=	./generator
directory2			=	./solver

all:				| $(directory) $(directory2)
					$(MAKE) -C ./source/generator/
					$(MAKE) -C ./source/solver/

$(directory):
					@mkdir -p $@
					@$(call WARNING, "[ //!\ ] Creating folder called _maths into ./generator")

$(directory2):
					@mkdir -p $@
					@$(call WARNING, "[ //!\ ] Creating folder called _maths into ./solver")

clean:
					$(MAKE) -C ./source/generator/ clean
					$(MAKE) -C ./source/solver/ clean

fclean: clean
					$(MAKE) -C ./source/generator/ fclean
					$(MAKE) -C ./source/solver/ fclean

re: fclean all

.PHONY: all clean fclean re