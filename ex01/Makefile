# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 21:56:45 by hlakhal-          #+#    #+#              #
#    Updated: 2023/11/14 22:03:09 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Bureaucrat.cpp main.cpp Form.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98 

all:$(NAME)

OBJ = $(SRC:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)
	
fclean:clean
	rm -rf $(NAME)
	
re: fclean all
	