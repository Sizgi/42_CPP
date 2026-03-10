# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 13:52:30 by sizgi             #+#    #+#              #
#    Updated: 2026/03/10 11:56:45 by sizgi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp #TempClass.cpp

OBJ_DIR = obj

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

DEPS = $(OBJ:.o=.d)

NAME = ex01

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

.PHONY: all clean fclean re
