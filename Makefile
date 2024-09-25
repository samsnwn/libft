NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = src
OBJS_DIR = obj
INCS_DIR = include

SRCS = $(wildcard $(SRCS_DIR)/*.c $(SRCS_DIR)/ft_printf/*.c $(SRCS_DIR)/get_next_line/*.c)
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

# SRCS = ft_strncmp.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c\
# 	ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
# 	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c\
# 	ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putnbr_fd.c\
# 	ft_putendl_fd.c ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c\
# 	ft_strmapi.c ft_strtrim.c ft_substr.c\

# SRCS_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c\
# 	ft_lstsize.c ft_lstclear.c ft_lstmap.c ft_lstiter.c ft_lstdelone.c\

# HEAD = libft.h
# OBJS = ${SRCS:.c=.o}
# OBJS_BONUS = ${SRCS_BONUS:.c=.o}
# NAME = libft.a
# CC = cc
# RM = rm -f
# CFLAGS = -Wall -Werror -Wextra

# all : ${NAME}

# ${NAME} : ${OBJS}
# 	ar rcs ${NAME} ${OBJS}


# bonus : ${NAME} ${OBJS_BONUS}
# 	ar rcs ${NAME} ${OBJS_BONUS}


# %.o: %.c
# 	${CC} ${CFLAGS} -c $< -o $@

# clean :
# 	${RM} ${OBJS} ${OBJS_BONUS} 

# fclean :	clean
# 	${RM} ${NAME} 

# re: fclean all

# .PHONY: all clean fclean re

