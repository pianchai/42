# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pongsrit <pongsrit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 12:37:19 by pongsrit          #+#    #+#              #
#    Updated: 2023/02/17 11:19:22 by pongsrit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNAME = uname -s

ifeq ($(UNAME), Linux)
	CC = clang
else
	CC = gcc
endif

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a

IS_LIB = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  
TO_LIB = ft_toupper.c ft_tolower.c ft_atoi.c
STR_LIB = ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c \
		  ft_strlcat.c ft_strnstr.c ft_strdup.c
MEM_LIB = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		  ft_memcmp.c ft_calloc.c
P2_LIB = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		 ft_strmapi.c ft_striteri.c
P2FD_LIB = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BN_LIB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
TMP_LIB = ft_strlen.c

SRCS = $(IS_LIB) $(TO_LIB) $(P2FD_LIB) $(TMP_LIB)
# $(STR_LIB) $(MEM_LIB) $(P2_LIB) $(BN_LIB)
OBJS = $(SRCS:.c=.o)
BN_OBJS = $(BN_LIB:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(BN_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BN_OBJS)

clean:
	$(RM) $(OBJS) $(BN_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	$(CC) maintest.c $(NAME)
	valgrind --vgdb=no --leak-check=full --show-leak-kinds=all ./a.out

leak:
	leaks --atExit -- ./a.out

norm:
	@echo "------------------------------------"
	@echo " !!!!!!!!   NORMINETTE   !!!!!!!!"
	@echo ""
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckDefine *.h
	@echo ""
	@echo "------------------------------------"
