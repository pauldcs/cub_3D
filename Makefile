NAME = cub3D
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRCS = \
	srcs/main.c		\
\
	srcs/parse/c3d_parser.c			\
	srcs/parse/c3d_is_cub_file.c	\
	srcs/parse/c3d_map_is_ok.c		\
	srcs/parse/c3d_rgb_is_ok.c		\
	srcs/parse/c3d_texture_is_ok.c	\
\
	srcs/utils/c3d_error.c			\
	srcs/utils/c3d_free2d.c			\
	srcs/utils/c3d_malloc.c			\
	srcs/utils/c3d_memcpy.c			\
	srcs/utils/c3d_memset.c			\
	srcs/utils/c3d_putstr.c			\
	srcs/utils/c3d_split_dynamic.c	\
	srcs/utils/c3d_split_static.c	\
	srcs/utils/c3d_str_to_uint.c	\
	srcs/utils/c3d_strchr.c			\
	srcs/utils/c3d_strcmp.c			\
	srcs/utils/c3d_strcreate.c		\
	srcs/utils/c3d_strlen.c			\
	srcs/utils/c3d_strslen.c		\
	srcs/utils/c3d_read_all.c		\

SRCS_OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $< -I ./incs

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CC) $(CFLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	rm -f $(SRCS_OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(NAME).dSYM

re: fclean all

.PHONY	: all clean fclean re
