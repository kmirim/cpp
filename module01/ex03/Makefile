SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = weapons
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

ifndef DEBUG
	CXXFLAGS += -g -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1;32mthe Weapon target has been mad with success\033[0m"

debug:
	$(CXX) -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -o $(NAME) $(SRCS)

%.o: %.c 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "\033[1;31mthe Weapon had been deleted\033[0m"

fclean: clean
	$(RM) $(NAME)
	@echo "\033[1;31mthe Weapon target has been deleted\033[0m"

re:fclean all

.PHONY: all clean fclean re valgrind debug-valgrind
