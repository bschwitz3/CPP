# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 14:51:00 by bschwitz          #+#    #+#              #
#    Updated: 2023/05/04 14:07:15 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		serializer

SRCS =		main.cpp \
			Serializer.cpp

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