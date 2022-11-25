# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 12:02:30 by hyeo              #+#    #+#              #
#    Updated: 2022/11/24 12:02:32 by hyeo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Base.cpp main.cpp
OBJS = ${SRCS:.cpp=.o}
CC    = g++
CFLAGS	= -Wextra -Wall -Werror -std=c++98
NAME	= a.out
.cpp.o:		&{CC} &{CFLAGS} -c -o $@ $<

all:  ${NAME}

${NAME} : ${OBJS}
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	 rm -f ${OBJS}
	
fclean :	clean
	rm -f ${NAME}

re : fclean all clean

.PHONY: all bonus clean fclean re
