TARGET = phonebook

CXX = c++

CXXFLAGS = -std=c++98 -I.

SRCS = Phonebook.cpp Contact.cpp main.cpp PhonebookUtils.cpp

HEADERS = Phonebook.hpp Contact.hpp PhonebookUtils.hpp

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
