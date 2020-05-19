NAME	= my_hunter

CC	= gcc

RM	= rm -f

SRCS	= ./before_while.c \
	  ./display_heart.c \
	  ./destroy_motherfuker.c \
	  ./display_heats.c \
	  ./my_hunter.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
