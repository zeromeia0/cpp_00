# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvazzs <vvazzs@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 23:58:40 by vvazzs            #+#    #+#              #
#    Updated: 2025/11/21 13:54:07 by vvazzs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	= megaphone
SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

GREEN	= \e[0;32m
RESET	= \e[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo -e "$(GREEN)Compiling $<$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo -e "$(GREEN)Cleaning$(RESET)"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
