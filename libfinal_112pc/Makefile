# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acloos <acloos@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 10:35:01 by acloos            #+#    #+#              #
#    Updated: 2022/06/07 12:25:25 by acloos           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

RM = rm -f

SRC =	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_striteri.c \
	ft_split.c \

SRC_BONUS = 	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew._bonusc \
	ft_lstsize_bonus.c \

HEADER = libft.h

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus



