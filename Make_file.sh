#!/bin/bash

cat << 'EOF' > Makefile

CC = g++

CFLAGS = Wall Wextra Werror -std=c++98

SRC=$(find . -maxdepth 1 -name "*.cpp" -exec basename {} \;)

OBJ = $(SRC:.cpp=.o)

NAME = a.out

all: $(NAME)


$(NAME): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

