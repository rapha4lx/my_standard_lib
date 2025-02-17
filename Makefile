NAME=libft.a

SRCS=bzero.c \
     isalpha.c \
     isdigit.c \
     memset.c \
     isalnum.c \
     isascii.c \
     isprint.c \
     toupper.c \
     tolower.c \
     strchr.c \
     strrchr.c \
     strncmp.c \
     memchr.c \
     memcmp.c \
     strnstr.c \
     atoi.c \
     strlcat.c \
     strlcpy.c \
     calloc.c \
     strdup.c \
     strlen.c \
     bzero.c \
     memcpy.c \
     memmove.c \
     substr.c \
     strjoin.c \
     strtrim.c \
     split.c \
     strmapi.c \
     striteri.c \
     putchar_fd.c \
     putstr_fd.c \
     putendl_fd.c \
     putnbr_fd.c \
     itoa.c \
     putstr.c \
     get_next_line.c \
     get_split_size.c \
     free_split.c \
     search_and_replace.c \
     atoi_hex.c \
     atol.c \
     lstnew.c \
     lstadd_front.c \
     lstsize.c \
     lstlast.c \
     lstadd_back.c \
     lstdelone.c \
     lstclear.c \
     lstiter.c \
     lstmap.c \
     printf.c \
     putnbr_unsigned.c \
     putnbr_unsigned_base.c \
     putnbr_base.c \
     lst_by_index.c

OBJS = $(SRCS:.c=.o)

CC= cc
FLAGS= -g -Wall -Werror -Wextra

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)

run: re
	@clear
	@$(CC) $(FLAGS) main.c $(NAME)
	@./a.out



run2: re
	@clear
	@$(CC) $(FLAGS) main.c $(NAME) -l bsd
	@./a.out

test: re
	@clear
	@bash run_docker.sh

t: re
	@clear
	@$(CC) main.c $(NAME) -l bsd
	@./a.out
