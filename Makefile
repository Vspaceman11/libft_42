# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpushkar <vpushkar@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 14:13:04 by vpushkar          #+#    #+#              #
#    Updated: 2025/03/11 16:16:04 by vpushkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Werror -Wall -Wextra
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c ft_strlen.c ft_strncmp.c \
	ft_tolower.c ft_toupper.c
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
