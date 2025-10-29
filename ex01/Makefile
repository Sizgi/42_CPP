# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 16:46:47 by sizgi             #+#    #+#              #
#    Updated: 2025/10/29 18:40:24 by sizgi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp main.cpp

OBJ_DIR = obj

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

DEPS = $(OBJ:.o=.d)

NAME = phonebook

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g
CXX = g++

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME) $(CPPFLAGS)
$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(dir $@)
		$(CXX) $(CPPFLAGS) -c $< -o $@

-include $(DEPS)

clean:
		$(RM) $(OBJ) $(DEPS) $(OBJ_DIR)
fclean: clean
		$(RM) $(DEPS) $(NAME) $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re add_a

###### trying some stuff####

add_a: $(NAME)
	@./$(NAME) < /tmp/test_input.txt
