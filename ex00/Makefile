# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/18 17:40:47 by drahwanj          #+#    #+#              #
#    Updated: 2026/02/18 17:40:47 by drahwanj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=easyfind

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
