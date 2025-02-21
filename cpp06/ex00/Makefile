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

NAME :=  conversionOfScalarTypes

SRC := main.cpp

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
