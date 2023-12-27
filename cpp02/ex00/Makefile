# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: parisasadeqi <parisasadeqi@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2023/12/20 15:42:39 by parisasadeq   #+#    #+#                  #
#    Updated: 2023/12/21 13:49:41 by parisasadeq   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

PROJECT = Fixed
NAME = fixed
CC = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++11
SRC = main.cpp Fixed.cpp
OBJ := $(SRC:%.cpp=%.o)
RM := rm -rf

BLACK   := \033[30m
RED     := \033[31m
GREEN   := \033[32m
YELLOW  := \033[33m
BLUE 	:= \033[96m
MAGENTA := \033[38;5;206m
CYAN    := \033[36m
WHITE   := \033[37m
RESET   := \033[0m
BOLD    := \033[1m
DIM     := \033[2m
ITALIC  := \033[3m
UNDER   := \033[4m
BLINK   := \033[5m
REVERSE := \033[7m
HIDDEN  := \033[8m
PINK 	:= \033[35m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiled with $(GREEN)$(BOLD)$(CPPFLAGS)$(RESET)"
	@$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)
	@echo "$(BLUE)$(BOLD)----------------------------------------"
	@echo "     $(PROJECT) = NOW READY FOR USE!"
	@echo "----------------------------------------$(RESET)"
	
%.o: %.cpp
	@echo "Compiled ✅ $(BLUE) $(BOLD) $^ $(RESET)"
	@$(CC) $(CPPFLAGS) -c -o $@ $^
	
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE) $(BOLD)$(NAME) $(RESET) Cleansed ✅"

re: fclean all

.PHONY: all clean fclean re