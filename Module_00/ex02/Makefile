NONE	=	\033[0;0m
RED		=	\033[0;31m
GREEN	=	\033[0;32m
PURPLE	=	\033[0;35m

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

NAME	=	account

SRCS	=	tests.cpp Account.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADER	=	Account.hpp
HEADERDIR = ./

all: $(NAME)

$(NAME): $(OBJS) $(SRCS) $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(HEADERDIR) $(OBJS) -o $(NAME)
	@echo "$(PURPLE) $(NAME) has been created $(NONE)"

clean:
	$(RM) $(OBJS)
	@echo "$(RED) $(OBJS) has been deleted $(NONE)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED) $(NAME) has been deleted $(NONE)"

re:	fclean all

.PHONY: all clean fclean re