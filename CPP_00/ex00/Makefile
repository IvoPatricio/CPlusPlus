# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 19:51:16 by ifreire-          #+#    #+#              #
#    Updated: 2023/03/18 14:09:01 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= srcs/megaphone.cpp

OBJ				= $(SRC:.cpp=.o)

CC				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= megaphone

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

all:			$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
				rm -f $(OBJ)

fclean: 		clean
				rm -f $(NAME)

re: 			fclean $(NAME)

test1:			all
				@make clean
				clear
				./$(NAME) "shhhhh... I think the students are asleep..."

test2:			all
				@make clean
				clear
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

test3:			all
				@make clean
				clear
				./$(NAME)

.PHONY: all clean fclean re test1 test2 test3