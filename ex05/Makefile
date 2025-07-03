# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raperez- <raperez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 10:22:57 by raperez-          #+#    #+#              #
#    Updated: 2025/07/03 12:27:30 by raperez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#――――――――――――――――――――COLORS――――――――――――――――――――#

RED		:= \033[0;31m
GREEN	:= \033[0;32m
YELLOW	:= \033[0;33m
BLUE	:= \033[0;34m
MAGENTA	:= \033[0;35m
CYAN	:= \033[0;36m
WHITE	:= \033[0;37m
RESET	:= \033[0m

#――――――――――――――――――――VARIABLES――――――――――――――――――――#

NAME = Harl_2.0
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

#――――――――――――――――――――RULES――――――――――――――――――――#

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) compiled!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)🗑 Objects've been erased!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)🗑 $(NAME) have been erased!$(RESET)"

re: fclean all

.PHONY: all clean fclean re