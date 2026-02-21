# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/21 16:31:52 by drahwanj          #+#    #+#              #
#    Updated: 2026/02/21 16:31:53 by drahwanj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=span

SRC=main.cpp Span.cpp

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
