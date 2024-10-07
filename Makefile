NAME = libasm.a

SRC = ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

NASM	= nasm
GCC		= gcc
FLAGS	= -Wall -Wextra -Werror
ARC		= -m64
RM		= rm -rf
LIB		= ar rcs
EXEC	= libasm.test
DIR		= ./src/

SRCS = $(addprefix $(DIR), $(SRC))

OBJ	= $(SRCS:.s=.o)

%.o:	%.s
	$(NASM) -f macho64 $< -o $@

$(NAME):	$(OBJ)
	$(LIB) $(NAME) $(OBJ)

all:	$(NAME)

test: all
	$(GCC) $(FLAGS) main.c $(NAME) -o $(EXEC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(EXEC)

re: fclean all

.PHONY: .o all norm clean fclean re
