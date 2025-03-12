# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 14:13:04 by vpushkar          #+#    #+#              #
#    Updated: 2025/03/12 17:59:11 by vpushkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Werror -Wall -Wextra
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_memcmp.c ft_memchr.c \
	ft_tolower.c ft_toupper.c ft_atoi.c
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
