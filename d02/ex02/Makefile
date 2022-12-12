NAME = exec

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
CPPFLAGS = -MMD 

SRCS = main.cpp \
Fixed.cpp 

OBJS = ${SRCS:.cpp=.o}
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

-include $(DEPS)

.PHONY : all clean fclean re