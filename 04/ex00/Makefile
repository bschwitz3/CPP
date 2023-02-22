# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 12:07:09 by bschwitz          #+#    #+#              #
#    Updated: 2023/02/22 13:30:07 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphisme

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re