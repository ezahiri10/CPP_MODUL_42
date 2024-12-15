
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Contact.cpp PhoneBook.cpp main.cpp utils.cpp

HEADERS = Contact.hpp head.hpp PhoneBook.hpp 

OBJ = $(SRC:.cpp=.o)

NAME = Phonebook

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

