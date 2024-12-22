
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= bsp.cpp Fixed.cpp main.cpp Point.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = a.out

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Point.hpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

