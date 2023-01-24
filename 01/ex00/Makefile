# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 14:10:38 by bschwitz          #+#    #+#              #
#    Updated: 2023/01/24 14:43:32 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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