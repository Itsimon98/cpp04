NAME = Animal
CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
RM = rm -rf
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	= $(SRCS:.cpp=.o)
.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}
all:	$(NAME)
$(NAME):	$(OBJS)
				$(CC) $(FLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(NAME)
fclean: 
	rm -rf $(NAME) $(OBJS)
re: fclean all
.PHONY: all clean fclean re 