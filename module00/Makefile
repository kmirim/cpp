TARGET = phonebook

CXX = c++

CXXFLAGS = -std=c++98 -I.

SRCS = phonebook.cpp contact.cpp main.cpp phonebook_utils.cpp

HEADERS = phonebook.hpp contact.hpp phonebook_utils.hpp

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
