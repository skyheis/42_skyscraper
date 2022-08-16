SRCS	=  main.c populate_if_n_in_str.c do_mandatory_rules.c check_and_bready.c print_matrix.c
OBJS	= ${SRCS:.c=.o}
NAME = rush01
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

debug: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME} -g
	lldb ${NAME}

.PHONY: all clean fclean re .c.o
