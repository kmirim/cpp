TARGET = Zombie

CXX = c++

CXXFLAGS = -std=c++98 -I.

SRCS = NewZombie.cpp RandomChump.cpp Zombie.cpp Zombie.cpp main.cpp

HEADERS = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re