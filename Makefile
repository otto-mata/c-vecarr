NAME=libvecarr.a
AR=ar rcs
CC=clang
CFLAGS=-Wall -Wextra -Werror
CFLAGS+=-I./inc
SRC=vecarr.c utils.c
OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $@ $^

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

default: all

.PHONY: all clean fclean re default
