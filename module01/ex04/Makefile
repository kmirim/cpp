SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
NAME=replace
CXX = c++
CXXFLAGS= -Wall -Wextra -Werror --std=c++98
RM = rm -f

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[1;32m🚀 $(NAME) compiled successfully!\033[0m"

%.o:%.c
	@echo "\033[1;32m⚙️  Compiling $<...\033[0m"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "\033[1;31m🧹 Cleaning object files...\033[0m"
	$(RM) $(OBJ)
	@echo "\033[1;91m🗑️  Object files deleted! 💀\033[0m"

fclean: clean
	@echo "\033[1;31m💥 Removing $(NAME)...\033[0m"
	$(RM) $(NAME)
	@echo "\033[1;91m🔥 $(NAME) completely deleted! ☠️\033[0m"
re: fclean all
