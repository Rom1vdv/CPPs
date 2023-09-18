NAME = zombiehorde

SRC := $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)
CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g 

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re