# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 17:23:15 by bschwitz          #+#    #+#              #
#    Updated: 2023/06/21 11:31:58 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		mutant

SRCS =		main.cpp \

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