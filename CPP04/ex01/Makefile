
CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = LesChiensFontPasDesChats

SRCS =	main.cpp\
		Dog.cpp\
		Cat.cpp\
		Animal.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\
		Brain.cpp\

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean test