NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_strtrim.c ft_strjoin.c 
HEADER = ./
OBJS = $(SRCS:.c=.o)
RUN = run

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $^ -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

so :
	$(CC) -fPIC $(CFLAGS) $(SRC) -shared -o libft.so $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus : $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

run : fclean all

.PHONY: all clean fclean re bonus