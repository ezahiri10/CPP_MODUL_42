CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 
HEADER = easyfind.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = ex00

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER) 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
