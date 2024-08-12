NAME=	EasyFind

SRC=	main.cpp \

OBJ=	$(SRC:.cpp=.o)

%.o:%.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -o $(OBJ)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@ 
