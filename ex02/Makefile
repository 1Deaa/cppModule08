# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/21 18:09:55 by drahwanj          #+#    #+#              #
#    Updated: 2026/02/21 18:09:56 by drahwanj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=abomination

SRC=main.cpp

CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

OBJ=$(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
