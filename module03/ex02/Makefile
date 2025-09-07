SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRC:.cpp=.o)
CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -g
NAME = fragtrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1;32m🚀 $(NAME) compiled successfully!\033[0m"

%.o:%.cpp
	@echo "\033[1;32m⚙️  Compiling $<...\033[0m"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "\033[1;31m🧹 Cleaning object files...\033[0m"
	$(RM) $(OBJS)
	@echo "\033[1;91m🗑️  Object files deleted! 💀\033[0m"

fclean: clean
	@echo "\033[1;31m💥 Removing $(NAME)...\033[0m"
	$(RM) $(NAME)
	@echo "\033[1;91m🔥 $(NAME) completely deleted! ☠️\033[0m"
re: fclean all