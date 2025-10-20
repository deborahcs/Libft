COMP = cc
FLAG = -Wall -Wextra -Werror
NAME = libft.a
FUNCTIONS = 
OBJ = $(FUNCTIONS:.c=.o)

.c.o: 
	$(COMP) $(FLAG) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

