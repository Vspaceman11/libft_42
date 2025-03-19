# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 14:13:04 by vpushkar          #+#    #+#              #
#    Updated: 2025/03/19 13:55:59 by vpushkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra -g
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_memcmp.c ft_memchr.c \
	ft_memcpy.c ft_memset.c ft_memmove.c ft_bzero.c ft_calloc.c \
	ft_tolower.c ft_toupper.c ft_atoi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_substr.c ft_strmapi.c \
	ft_striteri.c ft_split.c ft_itoa.c ft_strtrim.c
B_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c
OBJ = $(SRC:.c=.o)
B_OBJ = $(B_SRC:.c=.o)
INC = libft.h
RM = rm -f

#Compile object files
.c.o:
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

#Creat static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Bonus part (compiles only if 'make bonus' is called)
bonus: $(OBJ) $(B_OBJ)
	ar rcs $(NAME) $(OBJ) $(B_OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
