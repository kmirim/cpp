SRC = main.cpp
OBJS = $(SRC:.cpp=.o)
NAME = zombie 
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re