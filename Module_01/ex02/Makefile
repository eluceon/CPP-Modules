NONE	=	\033[0;0m
RED		=	\033[0;31m
GREEN	=	\033[0;32m
PURPLE	=	\033[0;35m

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

NAME	=	brain

SRCDIR	=	./
SRCS	=	main.cpp
OBJDIR	=	./obj/
OBJS	=	$(addprefix $(OBJDIR), $(SRCS:.cpp=.o))


all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN) Object file $(PURPLE)$@ $(GREEN)for $(NAME) has been created $(NONE)"

$(NAME): $(OBJDIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(PURPLE) $(NAME) has been created $(NONE)"


clean:
	$(RM) $(OBJDIR)
	@echo "$(RED) $(OBJDIR) has been deleted $(NONE)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED) $(NAME) has been deleted $(NONE)"

re:	fclean all

.PHONY: all clean fclean re