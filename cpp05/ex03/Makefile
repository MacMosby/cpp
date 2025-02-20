# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 19:43:06 by mrodenbu          #+#    #+#              #
#    Updated: 2025/02/14 19:43:08 by mrodenbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=  noYouNeedForm28BNot28C

SRCS := main.cpp AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS := $(SRCS:%.cpp=%.o)

CPP := c++

WFLAGS := -Wall -Wextra -Werror

STDFLAG := -std=c++98

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CPP) $(WFLAGS) $(STDFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(WFLAGS) $(STDFLAG) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
