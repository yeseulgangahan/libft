# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yehan <yehan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 18:45:16 by yehan             #+#    #+#              #
#    Updated: 2022/05/03 20:19:48 by yehan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
AR			:= ar
ARFLAGS		:= -rcs
RM			:= rm -f

# 과제에서 만든 함수는 SRCS에,
# 내가 만든 함수는 SRCS_YEHAN에 있다.

SRCS	:= \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		get_next_line.c \
		get_next_line_utils.c \
		get_next_line_bonus.c \
		get_next_line_utils_bonus.c \

SRCS_YEHAN := \
		ft_lstadd_back_int.c \
		ft_lstlast_int.c \
		ft_lstnew_int.c


OBJS		= $(SRCS:.c=.o)
OBJS_YEHAN	= $(SRCS_YEHAN:.c=.o)

ifdef YEHAN
	OBJS	+=	$(OBJS_YEHAN)
endif

.PHONY:		all clean fclean re yehan

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJS_YEHAN)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

yehan:
			$(MAKE) YEHAN=true

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $@ $^
