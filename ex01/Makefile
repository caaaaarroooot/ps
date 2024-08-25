CC = cc
CFLAG = -Wall -Wextra -Werror
SRCDIR = srcs
NAME = ft_cat
SRC = $(SRCDIR)/$(NAME).c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ) 

$(OBJ): $(SRC)
	$(CC) $(CFLAG) -c $(SRC) -o $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
