SRC			= main.c ft_read_funcs.c ft_save_parts.c ft_strlen.c ft_putstr.c ft_validated.c str_funcs.c ft_parse_dict.c ft_read_ln.c
SRCS		= ${addprefix ${PRE}, ${SRC}}
OBJS		= ${SRCS:.c=.o}
PRE			= ./src/
HEAD		= ./include/
NAME		= rush-02
GCC			= cc
CFLAGS		= -Wall -Wextra 

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
