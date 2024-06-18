CC = c++
NAME = harlFilter
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes
RM = rm -rf

SRCS = main.cpp harl.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run	