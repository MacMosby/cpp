# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 10:29:13 by mrodenbu          #+#    #+#              #
#    Updated: 2024/10/22 00:32:29 by marcrodenbu      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := awesome_phonebook

SRC := main.cpp Contact.cpp PhoneBook.cpp

OBJ := $(SRC:%.cpp=%.o)

CPP := c++

WFLAGS := -Wall -Wextra -Werror

STDFLAG := -std=c++98

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CPP) $(WFLAGS) $(STDFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CPP) $(WFLAGS) $(STDFLAG) -c -o $@ $<

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
