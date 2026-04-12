# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sizgi <sizgi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/22 13:59:49 by sizgi             #+#    #+#              #
#    Updated: 2026/03/22 13:59:49 by sizgi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp

OBJ_DIR = obj

OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

DEPS = $(OBJ:.o=.d)

NAME = PmergeMe

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g # -fsanitize=undefined -pedantic -Wno-newline-eof
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