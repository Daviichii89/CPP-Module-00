RESET 	= \033[0;39m
RED 	= \033[0;91m
GREEN	= \033[0;92m
YELLOW	= \033[0;93m
BLUE	= \033[0;94m

NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

DFLAGS = -fsanitize=address

SRC = Contact.cpp Phonebook.cpp Utils.cpp main.cpp 

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
	@if [ -f $(NAME) ]; then \
		make clean-files --no-print-directory; \
	else \
		make no-files --no-print-directory; \
	fi

clean-files:
	@echo "\n$(YELLOW)	Removing $(NAME)...$(RESET)"
	@rm -f $(NAME) $(LIBFT)
	@echo "\n$(GREEN)"
	@echo "	===================	"
	@echo "	 All files removed	"
	@echo "	===================	"
	@echo "\n$(RESET)"

no-files:
	@echo "\n$(RED)"
	@echo "	=====================    "
	@echo "	 No files to remove. "
	@echo "	=====================    "
	@echo "\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re