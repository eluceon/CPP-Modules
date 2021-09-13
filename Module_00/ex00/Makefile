NONE	=	\033[0;0m
RED		=	\033[0;31m
GREEN	=	\033[0;32m
PURPLE	=	\033[0;35m

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

NAME	=	megaphone

SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "$(PURPLE) $(NAME) has been created $(NONE)"

$(OBJS): $(SRCS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN) Object file $(PURPLE)$@ $(GREEN)for philo has been created $(NONE)"

clean:
	$(RM) $(OBJS)
	@echo "$(RED) $(OBJS) has been deleted $(NONE)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED) $(NAME) has been deleted $(NONE)"

re:	fclean all

.PHONY: all clean fclean re