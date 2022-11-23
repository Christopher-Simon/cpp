NAME = megaphone

CC = g++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror


SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

.PHONY : all clean fclean re