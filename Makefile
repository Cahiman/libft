SRCS		=  ft_strlen.c
B_SRCS		= 
HEAD		= ./includes/ 
OBJS		= ${SRCS:.c=.o}
B_OBJS		= ${B_SRCS:.c=.o}
NAME		= libft.a
CC			= gcc
RM			= rm -f
AR			= ar rc

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		${B_OBJS}
			${AR} ${NAME} ${B_OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS} ${B_OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re