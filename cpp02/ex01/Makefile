# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 16:18:18 by mrodenbu          #+#    #+#              #
#    Updated: 2024/10/04 16:18:20 by mrodenbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := towardsAMoreUsefulFixedPointNumberClass

SRC := main.cpp Fixed.cpp

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
