# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 19:51:20 by ifreire-          #+#    #+#              #
#    Updated: 2023/08/24 05:41:46 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				= main.cpp \
				srcs/Bureaucrat.cpp srcs/GradeTooHigh.cpp srcs/GradeTooLow.cpp

OBJ				= $(SRC:.cpp=.o)

CC				= c++

FLAGS			= -Wall -Werror -Wextra -g -fsanitize=address -std=c++98

NAME			= a.out

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