########## MAKEFILE -> FT_PRINTF ##########
LIB	=	ar rcs
RM	=	rm -f

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

SRC	=	ft_printf.c ft_print_char.c ft_print_nbr.c
OBJ	=	$(SRC:.c=.o)
INCLUDE	=	ft_printf.h

SRC_B	=	ft_printf_bonus.c ft_print_char_bonus.c ft_print_nbr_bonus.clean
OBJ_B	=	$(SRC_B:.c=.o)
INCLUDE	=	ft_printf_bonus.h

##########COLORES##########
DEF_COLOR = \033[0;39m
CUT = \033[K
R = \033[31;1m
G = \033[32;1m
Y = \033[33;1m
B = \033[34;1m
P = \033[35;1m
GR = \033[30;1m
END = \033[0m


##########REGLAS##########
all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)
	@echo "\n$(G)Basic library compiled!$(DEF_COLOR)-> $@\n"

bonus: $(OBJ) $(OBJ_B)
	$(LIB) $(NAME) $(OBJ_B) $(OBJ)

clean:
	$(RM) $(OBJ) $(OBJ_B)
	@echo "$(R)All .o files removed$(DEF_COLOR)\n"

fclean: clean
	$(RM) $(NAME)
	@echo "$(R)Library .a file removed$(DEF_COLOR)\n"

re: fclean all

.PHONY: all bonus clean fclean re
