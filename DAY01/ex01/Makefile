
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC=    Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Zombie

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

