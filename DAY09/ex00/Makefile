CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = BitcoinExchange.cpp Parser.cpp main.cpp 
HEADER = BitcoinExchange.hpp Parser.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = btc

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
