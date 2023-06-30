NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)
CPP = g++

CPPFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re