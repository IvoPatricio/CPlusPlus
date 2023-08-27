# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 19:51:20 by ifreire-          #+#    #+#              #
#    Updated: 2023/03/23 14:51:09 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= main.cpp

OBJ				= $(SRC:.cpp=.o)

CC				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= address

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