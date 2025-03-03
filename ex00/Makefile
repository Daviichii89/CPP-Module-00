RESET 	= \033[0;39m
RED 	= \033[0;91m
GREEN	= \033[0;92m
YELLOW	= \033[0;93m
BLUE	= \033[0;94m

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	@echo "\n"
	@echo "$(YELLOW)	Compiling $(NAME)...\n$(RESET)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "\n$(GREEN)"
	@echo "	===================	"
	@echo "	 $(NAME) created	"
	@echo "	===================	"
	@echo "\n$(RESET)"

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re