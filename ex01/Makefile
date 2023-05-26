SRCS =		main.c	\

OBJS =		$(SRCS:.c=.o)

C =		gcc

CFLAGS =	-Wall -Werror -Wextra

RM =		rm -f

NAME =		list

RED			=		\033[0;31m
GREEN		=		\033[0;32m
RESET		=		\033[0m

.c.o:
			@$(c) $(CFLAGS) -c $< -o $@
			@echo "$(GREEN)objects created$(RESET)"

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(c) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "$(GREEN)$(NAME) created$(RESET)"

clean:
			@$(RM) $(OBJS)
			@echo "$(RED)objects deleted$(RESET)"

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(RED)$(NAME) deleted$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re
