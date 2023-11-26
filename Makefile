SRC	=	src/main.c	\
		src/utils.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./include

CFLAGS	=	-W -Wall -Wextra -Wpedantic

CC	=	gcc

NAME	=	ws_debug

all:	$(NAME)
.PHONY:	all

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

debug: CFLAGS += -g
debug: $(NAME)
.PHONY:	debug

clean:
	find -name *.o -delete
.PHONY:	clean

fclean: clean
	rm -rf $(NAME)
.PHONY:	fclean

re: fclean all
.PHONY:	all
