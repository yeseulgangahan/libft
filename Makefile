TARGET		:= libft.a

CC			:= cc
CFLAGS		:= -Wall -Wextra Werror
AR			:= ar
ARFLAGS		:= rcs
RM			:= rm -f

SRCS_MANDATORY	:= \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		if_itoa.c \
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
		ft_strtchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJS		:= $(SRCS:.c=.o)

.PHONY:		all clean fclean re

all:		$(TARGET)

clean:
			$(RM) $(OBJS)

fclean:
			$(RM) $(TARGET)

re:			fclean all

$(TARGET):	$(OBJS)
			$(LIBC) $@ $^

%.o:		%.c
			$(CC) $(CFLAGS) -c -o $@ $<
