# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soochoi <soochoi@student.42gyeongsan.kr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 16:07:24 by soochoi           #+#    #+#              #
#    Updated: 2026/01/23 16:35:05 by soochoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism1

HEADER_DIR = ./include/
HEADER_LIST = Animal.hpp Cat.hpp Dog.hpp\
			  WrongAnimal.hpp WrongCat.hpp
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_LIST))

CC = c++
FLAGS = -Wall -Wextra -Werror -g
VERSION_FLAG = -std=c++98
INCLUDE = -I$(HEADER_DIR)

SRCS_DIR = ./srcs/
SRCS_LIST = Animal.cpp Cat.cpp Dog.cpp\
			WrongAnimal.cpp WrongCat.cpp
SRCS = $(addprefix $(SRCS_DIR), $(SRCS_LIST))

MAIN = $(addprefix $(SRCS_DIR), main.cpp)

OBJS_DIR = ./objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS_LIST:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS) $(MAIN)
	$(CC) $(FLAGS) $(VERSION_FLAG) $(INCLUDE) $(OBJS) $(MAIN) -o $@

$(OBJS_DIR) : $(SRCS_DIR)
	@if [ ! -d "$(OBJS_DIR)" ]; then\
		mkdir -p $@;\
	fi

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp $(HEADER)
	$(CC) $(FLAGS) $(VERSION_FLAG) $(INCLUDE) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
