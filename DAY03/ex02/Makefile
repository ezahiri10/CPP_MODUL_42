
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = a.out

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

