NAME = libftprintf.a

SRC = ft_printf.c ft_printchar.c ft_printnmb.c ft_printunmb.c ft_printhex.c ft_printstr.c ft_printpnt.c

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)

clean:
		@$(RM) $(OBJ)
		
fclean: clean
		@$(RM) $(NAME)
		
re: fclean all
