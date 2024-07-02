CC = c++
NAME = Polymorphism
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -I./includes
RM = rm -rf

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp \
		WrongCat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	clear

$(NAME) : $(OBJS)
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