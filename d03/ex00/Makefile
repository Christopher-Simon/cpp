NAME = exec

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
CPPFLAGS = -MMD 

SRCS = main.cpp \
ClapTrap.cpp \

OBJ_DIR = obj/
OBJS = $(addprefix  $(OBJ_DIR), $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)%.o: %.cpp
	mkdir -p $(dir $@) 
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

-include $(DEPS)

.PHONY : all clean fclean re