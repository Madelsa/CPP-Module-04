# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 12:26:30 by mabdelsa          #+#    #+#              #
#    Updated: 2024/08/29 01:05:06 by mahmoud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	./main.cpp ./Animal.cpp ./Cat.cpp ./Dog.cpp ./WrongAnimal.cpp ./WrongCat.cpp ./Brain.cpp \

NAME = main
RM = rm -f
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
	
%.o: %.c
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re