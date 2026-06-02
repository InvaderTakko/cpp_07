NAME = array
#NAME_GIVEN = array_given
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

#SRCS_GIVEN = main_given.cpp
#OBJS_GIVEN = $(SRCS_GIVEN:.cpp=.o)

all: $(NAME)

#given: $(NAME_GIVEN)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

#$(NAME_GIVEN): $(OBJS_GIVEN)
#	$(CXX) $(CXXFLAGS) $(OBJS_GIVEN) -o $(NAME_GIVEN)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
#	rm -f $(OBJS_GIVEN)

fclean: clean
	rm -f $(NAME)
#	rm -f $(NAME_GIVEN)

re: fclean all

.PHONY: all clean fclean re
# .PHONY: given
