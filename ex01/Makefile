NAME=	Span

SRC=	Span.cpp main.cpp \

OBJ=	$(SRC:.cpp=.o)
DEP=	$(SRC:.cpp=.d)
CPP=	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -MMD -MP

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) -c $< -o $@ 

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include: $(DEPS)
