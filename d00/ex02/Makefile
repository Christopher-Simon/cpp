NAME = talent

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror


SRCS = tests.cpp\
Account.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

.PHONY : all clean fclean re