NAME = libasm.a

SRCS = ft_strlen.s \
			ft_strcpy.s
			# ft_write.s
			# ft_read.s \
			# ft_strcmp.s \
			# ft_strdup.s \

GCC		= gcc
FLAGS	= -Wall -Wextra -Werror
ARC		= -m64
RM		= rm -rf
LIB		= ar rcs
EXEC	= libasm.test

OBJ	= $(SRCS:.s=.o)

%.o:	%.s
	$(GCC) $(ARC) $(FLAGS) -c $< -o $@

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