# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 14:51:00 by bschwitz          #+#    #+#              #
#    Updated: 2023/05/01 13:38:52 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		bureaucrat

SRCS =		main.cpp Bureaucrat.cpp AForm.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \

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