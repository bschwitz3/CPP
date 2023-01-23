# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 11:22:17 by bschwitz          #+#    #+#              #
#    Updated: 2023/01/23 11:49:23 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all :	${NAME}

${NAME} :	${OBJS}
		${CC} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean :
		${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re : fclean ${NAME}

.PHONY: all clean fclean re