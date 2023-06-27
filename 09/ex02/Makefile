# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 21:53:39 by bschwitz          #+#    #+#              #
#    Updated: 2023/06/27 14:58:40 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		PmergeMe

SRCS =		main.cpp \
			PmergeMe.cpp

OBJS =		${SRCS:.cpp=.o}

CC =		c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -f

all: ${NAME}

${NAME}:	${OBJS}
		${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re