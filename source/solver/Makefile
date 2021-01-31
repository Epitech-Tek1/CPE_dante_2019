##
## EPITECH PROJECT, 2020
## CPE_dante_2019 [WSL: Debian]
## File description:
## Makefile
##

SRC				=	main.c \
					map.c \
					check.c \
					check_deadend.c \
					algorithme.c

BIN				= 	solver

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm

CFLAGS			=	-W -Wall -Werror

LDFLAGS			=	-lm -I../../include/ -Llib -lmy

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:			$(BIN)
				mv $(BIN) ../../solver/

debug:			$(OBJ)
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS) $(DFLAGS) -DDEBUG

$(BIN):			lib $(OBJ)
				@$(CC) -static -o $(BIN) $(OBJ) $(LDFLAGS) $(CFLAGS)

lib:
				@$(MAKE) -C lib/my/

clean:
				@$(RM) $(OBJ)
				@$(MAKE) -C lib/my/ clean

fclean:
				$(RM) ../../solver/$(BIN)
				@$(MAKE) -C lib/my/ fclean

re:				fclean all

.PHONY:			 all, fclean, re, library

## ========================================================================== ##
%.o:	%.c
	@gcc $(LDFLAGS) -g -o $@ -c $<