CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ScalarConverter.cpp main.cpp 
HEADER = ScalarConverter.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = convert

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
