# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 14:13:04 by vpushkar          #+#    #+#              #
#    Updated: 2025/03/14 17:51:28 by vpushkar         ###   ########.fr        #
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
	ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_substr.c ft_strmapi.c
OBJ = $(SRC:.c=.o)
INC = libft.h
RM = rm -f

#Compile object files
.c.o:
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

#Creat static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
