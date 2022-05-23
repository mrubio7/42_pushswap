NAME = push_swap

CC = gcc -Werror -Wextra -Wall

SRC =	main.c \
		printstacks.c \
		pushswap.c \
		operations_a.c 

LIB = src/libft/libft.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

MAKELIBS:
	make -C ./src/libft/

$(NAME): $(OBJ)
ifneq ($(shell test -e ./src/libft/libft.a && echo -n yes), no)
	make -C ./src/libft/
endif
	$(CC) $(OBJ) $(LIB) -o $(NAME)

debug: MAKELIBS
	$(CC) -g3 $(LIB) $(SRC) -o $(NAME)

clean:
	rm -f ./src/libft/*.o
	rm -f $(OBJ) $(LIB)

fclean: clean
	rm -f ./*.out
	rm -f -r ./*.dSYM
	rm -f ./src/libft/*.a
	rm -f push_swap

re: fclean all

.PHONY: clean fclean all re
