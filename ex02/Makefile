#Makefile   CPP06   ex02

SRCS		= main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= dynamic_cast 

CC			= c++-12 #c++-12

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g


all:		${NAME}

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< 

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			

.PHONY:		all clean fclean  re

clean:	
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)

re:			fclean all
