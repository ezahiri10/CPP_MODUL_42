
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

OBJ = $(SRC:.cpp=.o)

NAME = Weapon

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

