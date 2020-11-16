# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 12:10:09 by user42            #+#    #+#              #
#    Updated: 2020/11/16 17:36:50 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a

SRCS	=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_itoa.c			\
			ft_memcpy.c			\
			ft_memset.c			\
			ft_memccpy.c		\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_substr.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strrchr.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strncmp.c		\
			ft_strnstr.c		\
			ft_strtrim.c		\
			ft_strmapi.c		\
			ft_split.c			\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_isprint.c		\
			ft_strlen.c

BSRCS	=	ft_lstnew.c					\
			ft_lstadd_front.c			\
			ft_lstsize.c				\
			ft_lstlast.c				\
			ft_lstadd_back.c			\
			ft_lstdelone.c				\
			ft_lstclear.c				\
			ft_lstiter.c				\
			ft_lstmap.c

BOBJS	=	$(BSRCS:.c=.o)

OBJS	=	$(SRCS:.c=.o)

HEAD 	=	libft.h

AR		=	ar rc

LIB		=	ranlib

GCC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME):
	$(GCC) $(CFLAGS) -c ./$(SRCS) -I $(HEAD)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

bonus	:
	$(GCC) $(CFLAGS) -c ./$(BSRCS) -I $(HEAD)
	$(AR) $(NAME) $(BOBJS)
	$(LIB) $(NAME)

clean	:
	rm -rf $(OBJS) $(BOBJS)

fclean	: clean 
	rm -rf  $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
