
CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = Zombie

all: $(NAME)


$(NAME): $(OBJ) Zombie.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

