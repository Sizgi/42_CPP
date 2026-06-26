# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 16:46:47 by sizgi             #+#    #+#              #
#    Updated: 2026/01/19 20:16:25 by sizgi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ_DIR = obj

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

DEPS = $(OBJ:.o=.d)

NAME = unnecessary_violence

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP #-g -fsanitize=undefined -pedantic -Wno-newline-eof
CXX = c++

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME) $(CXXFLAGS)
$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(dir $@)
		$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

clean:
		$(RM) $(OBJ) $(DEPS) $(OBJ_DIR)
fclean: clean
		$(RM) $(DEPS) $(NAME) $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean
