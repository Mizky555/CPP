NAME = btc
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp \
	RPN.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(OBJS) -I/Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/include/ -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
