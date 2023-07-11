# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgabovs <vgabovs@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 19:52:07 by vgabovs           #+#    #+#              #
#    Updated: 2023/07/11 18:36:29 by vgabovs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strchr.c ft_strrchr.c ft_memset.c ft_strlen.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	ft_lstiter_bonus.c ft_lstmap_bonus.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

B_OBJ = $(BONUS:.c=.o)

all: $(NAME) bonus

$(NAME):
	cc -c $(SRC) $(FLAGS)
	ar -rcs $(NAME) $(OBJ)

bonus:
	cc -c $(BONUS) $(FLAGS)
	ar -rcs $(NAME) $(B_OBJ)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
