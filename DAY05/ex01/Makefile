CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Bureaucrat.cpp Form.cpp main.cpp 
HEADER = Bureaucrat.hpp Form.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = a.out

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
