NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
       ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
       ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
       ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
       ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstclear_bonus.c

OBJS = $(SRCS:.c=.o)
BOBJ = $(BONUS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror


RM = rm -f


.c.o:
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


all: $(NAME)

bonus: $(BOBJ)
	ar rc $(NAME) *.o

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all

.PHONY: all bonus clean fclean re
