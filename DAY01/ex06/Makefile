
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Harl.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = harlFilter

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

