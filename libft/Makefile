# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabrito- <mabrito-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:37:00 by mabrito-          #+#    #+#              #
#    Updated: 2023/11/02 10:37:06 by mabrito-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FUNCTIONS	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c	\
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = 	ft_lstadd_back.c ft_lstadd_front.c \
			ft_lstlast.c ft_lstmap.c ft_lstnew.c \
			ft_lstsize.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c 
			
			
OFILES	= $(FUNCTIONS:.c=.o)
OFILESB = $(BONUS:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

${NAME} : ${OFILES}	

	ar rcs $(NAME) $(OFILES)

bonus: $(OFILES)	$(OFILESB)

	ar rcs $(NAME) $(OFILES) $(OFILESB)

clean:
	rm -f $(OFILES) $(OFILESB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re