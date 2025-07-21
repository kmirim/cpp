SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
NAME=replace
CXX = c++
CXXFLAGS= -Wall -Wextra -Werror --std=c++98
RM = rm -f

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o:%.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
