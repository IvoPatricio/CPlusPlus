# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 19:51:20 by ifreire-          #+#    #+#              #
#    Updated: 2023/03/23 14:47:19 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= srcs/main.cpp srcs/newZombie.cpp srcs/randomChump.cpp srcs/Zombie.cpp

OBJ				= $(SRC:.cpp=.o)

CC				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= zombie

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

.PHONY: all clean fclean re