LIBRARY = Libft.a

SRC_FILES = $(wildcard ft_*.c)

OBJ_FILES = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

all: $(LIBRARY)

$(LIBRARY): $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

.PHONY: all clean fclean re
