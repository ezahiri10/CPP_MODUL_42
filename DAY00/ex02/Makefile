
CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Account

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Account.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

