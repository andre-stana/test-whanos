##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## to make a file
##

PINKBOLD=\033[1;95m
YELLOWBOLD=\033[0;33;1m

NAME			=		lol

SRC				=		$(shell find * -name "*.c" -type f)

OBJ				=		$(SRC:.c=.o)

INCLUDES		=		-I./includes

LIBS			=

CFLAGS			=		-Wall -Wextra -Werror $(INCLUDES)

all:	$(NAME)

$(NAME):		$(OBJ)
	@echo -e "${PINKBOLD} $(NAME) $(OBJ) $(LIBS) ${NORMAL}"
	gcc -o $(NAME) $(OBJ) $(LIBS)
	@echo -e "${PINKBOLD}[Done] [BIN] Compilation end successfully${NORMAL}"

%.o: %.cpp
	gcc -c $< -o $@ $(CFLAGS)

clean:
	@rm -rf $(OBJ)
	@rm -rf coding-style-reports.log
	@echo -e "${YELLOWBOLD}[Done] [CLEAN] Obj and log files removed${NORMAL}"

fclean: clean
	@rm -rf $(NAME)
	@echo -e "${YELLOWBOLD}[Done] [FCLEAN] Executable & log removed${NORMAL}"

re:     fclean all
	@echo -e "${YELLOWBOLD}[Done] [RE] Project recompiled${NORMAL}"
