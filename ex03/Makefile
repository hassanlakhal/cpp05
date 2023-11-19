# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 21:56:45 by hlakhal-          #+#    #+#              #
#    Updated: 2023/11/19 14:51:19 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp Intern.cpp
CXXFLAGS = -Wall -Wextra -Werror

NAMEFILE = *_shrubbery

CXX = c++ -std=c++98 

all:$(NAME)

OBJ = $(SRC:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ) 
	
fclean:clean
	rm -rf $(NAME) 

rmfiles:
	rm -rf $(NAMEFILE) $(OBJ)
	
re: fclean all
	