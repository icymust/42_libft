NAME = libft.a
PART1 = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 
PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
SRC = ${PART1} ${PART2}
OBJ_PATH = ${SRC:.c=.o}
CC = gcc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I include
.PHONY: all clear fclean re

%.o: %.c
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

$(NAME): ${OBJ_PATH}
	ar rc ${NAME} ${OBJ_PATH}
all: ${NAME}

clean: 
	${RM} ${OBJ_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all

#make clean/fclean/re/all