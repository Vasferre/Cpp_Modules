CC = c++
NAME = bsp
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes
RM = rm -rf

SRCS = Fixed.cpp main.cpp Point.cpp Bsp.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}
	clear

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