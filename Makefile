SRC_DIR = ./srcs/
HEAD_DIR = ./includes/
SRCS = ${SRC_DIR}ft_strncmp.c\
				${SRC_DIR}ft_isalnum.c\
				${SRC_DIR}ft_isalpha.c\
				${SRC_DIR}ft_isascii.c\
				${SRC_DIR}ft_isdigit.c\
				${SRC_DIR}ft_isprint.c\
				${SRC_DIR}ft_atoi.c\
				${SRC_DIR}ft_bzero.c\
				${SRC_DIR}ft_calloc.c\
				${SRC_DIR}ft_memchr.c\
				${SRC_DIR}ft_memcmp.c\
				${SRC_DIR}ft_memcpy.c\
				${SRC_DIR}ft_memmove.c\
				${SRC_DIR}ft_memset.c\
				${SRC_DIR}ft_strchr.c\
				${SRC_DIR}ft_strdup.c\
				${SRC_DIR}ft_strlcat.c\
				${SRC_DIR}ft_strlcpy.c\
				${SRC_DIR}ft_strlen.c\
				${SRC_DIR}ft_strnstr.c\
				${SRC_DIR}ft_strrchr.c\
				${SRC_DIR}ft_tolower.c\
				${SRC_DIR}ft_toupper.c\


HEAD = ${HEAD_DIR}libft.h
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

%.o: %.c
			${CC} ${CFLAGS} -I${HEAD_DIR} -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

