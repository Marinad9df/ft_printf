NAME		= libft.a
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -I $(INC)
RM		= rm -rf
AR		= ar rcs
LIB		= ranlib
INC			= inc/

SRCS_FILES	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_bzero.c ft_calloc.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_strdup.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCS_DIR			= srcs/
OBJS_DIR			= objs/
SRCS				= $(addprefix $(SRCS_DIR), $(SRCS_FILES))
OBJS				= $(addprefix $(OBJS_DIR), $(OBJS_FILES))
OBJS_FILES			= $(SRCS_FILES:%.c=%.o) 

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	[ -d $(OBJS_DIR) ] | mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.SILENT: all $(NAME) $(OBJS) re clean fclean
.PHONY: all clean fclean re
