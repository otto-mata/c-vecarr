NAME=libvecarr.a
AR=ar rcs
CC=clang
CFLAGS=-Wall -Wextra -Werror -g -O0
CFLAGS+=-I./inc
SRC=all.c \
	delete.c \
	destroy.c \
	filter.c \
	find.c \
	init.c \
	join.c \
	map.c \
	mem_utils.c \
	pop.c \
	push.c \
	reverse.c \
	slice.c \
	some.c \
	string_utils.c \
	sum.c
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
