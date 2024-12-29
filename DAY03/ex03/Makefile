
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp 

HEADS = ClapTrap.hpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp
OBJ = $(SRC:.cpp=.o)

NAME = a.out

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

