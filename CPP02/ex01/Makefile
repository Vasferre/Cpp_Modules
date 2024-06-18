CC = c++
NAME = fixedNumber
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes
RM = rm -rf

SRCS = Fixed.cpp main.cpp

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