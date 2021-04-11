# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenitta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 17:01:12 by sbenitta          #+#    #+#              #
#    Updated: 2021/04/11 14:49:12 by sbenitta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HFLAGS = -I$(H_SRC)

H_SRC = libft.h

SRC = ft_calloc.c\
	  ft_isascii.c\
	  ft_memccpy.c\
	  ft_memcpy.c\
  	  ft_strchr.c\
  	  ft_strlcpy.c\
	  ft_strnstr.c\
	  ft_toupper.c\
	  ft_atoi.c\
	  ft_isalnum.c\
	  ft_isdigit.c\
	  ft_memchr.c\
	  ft_memmove.c\
	  ft_strdup.c\
  	  ft_strlen.c\
  	  ft_strrchr.c\
	  ft_bzero.c\
	  ft_isalpha.c\
	  ft_isprint.c\
	  ft_memcmp.c\
	  ft_memset.c\
	  ft_strlcat.c\
	  ft_strncmp.c\
	  ft_tolower.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_strmapi.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\

OBJ = $(SRC:.c=.o)

LISTE = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

LST = $(LISTE:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

bonus: $(OBJ) $(LST)
		ar rc $(NAME) $(OBJ) $(LST)
		ranlib $(NAME)

.c.o: 
		$(CC) $(CFLAGS) $(HFLAGS) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJ) $(LST)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
