NAME = intern

SRC := $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)
CPP = c++

RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ) *_shrubbery

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re