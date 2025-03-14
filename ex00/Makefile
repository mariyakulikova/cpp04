NAME = claptrap
CXX = clang++
STD = -std=c++98
CXXFLAGS = -Wextra -Wall -Werror $(STD)
RM = rm -f

SRCS =	main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
