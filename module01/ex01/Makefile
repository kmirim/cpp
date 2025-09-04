SRCS = main.cpp Zombie.cpp ZombieHorde.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = zombie
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

ifdef DEBUG
	CXXFLAGS += -g -fsanitize=address -fsanitize=undefined
	LDFLAGS += -fsanitize=address -fsanitize=undefined
endif

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[1;33m🔗 Linking $(NAME)...\033[0m"
	@$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1;32m🚀 $(NAME) compiled successfully!\033[0m"

debug:
	@echo "\033[1;33m🔗 Debug linking $(NAME)...\033[0m"
	@$(CXX) -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -o $(NAME) $(SRCS)
	@echo "\033[1;32m🚀 $(NAME) debug version compiled successfully! \033[0m"

%.o: %.cpp 
	@echo "\033[1;32m⚙️  Compiling $<...\033[0m"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "\033[1;31m🧹 Cleaning object files...\033[0m"
	@$(RM) $(OBJS)
	@echo "\033[1;91m🗑️  Object files deleted! 💀\033[0m"

fclean: clean
	@echo "\033[1;31m💥 Removing $(NAME)...\033[0m"
	@$(RM) $(NAME)
	@echo "\033[1;91m🔥 $(NAME) completely deleted! ☠️\033[0m"

re: fclean all

.PHONY: all clean fclean re valgrind debug-valgrind debug