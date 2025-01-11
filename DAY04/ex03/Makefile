
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp AMateria.cpp 

HEADERS = Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp

OBJ = $(SRC:.cpp=.o)

NAME = BUILDER

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

