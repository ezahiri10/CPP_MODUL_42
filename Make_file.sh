# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Make_file.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 13:07:33 by ezahiri           #+#    #+#              #
#    Updated: 2025/01/18 13:30:16 by ezahiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

SRC_FILES=$(ls *.cpp 2>/dev/null | tr '\n' ' ')
HEADER_FILES=$(ls *.hpp 2>/dev/null | tr '\n' ' ')

cat << EOF > Makefile
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ${SRC_FILES}
HEADER = ${HEADER_FILES}

OBJ = \$(SRC:.cpp=.o)

NAME = a.out

all: \$(NAME)

\$(NAME): \$(OBJ)
	\$(CC) \$(CFLAGS) \$(OBJ) -o \$(NAME)

%.o: %.cpp \$(HEADER) 
	\$(CC) \$(CFLAGS) -c \$< -o \$@

clean:
	rm -f \$(OBJ)

fclean: clean
	rm -f \$(NAME)

re: fclean all
EOF
