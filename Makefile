CC 			=  gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar
ARFLAG		= rc
RM 			= rm
RMFLAGS	    = -rf
INCLUDES	= -I .
NAME		= libft.a
SRCS =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAG) $(NAME) $(OBJS)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all