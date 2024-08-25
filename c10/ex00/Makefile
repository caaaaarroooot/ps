CC = cc

CFLAG = -Wall -Wextra -Werror

SRCDIR = srcs

NAME = ft_display_file

MY_SOURCES = $(SRCDIR)/ft_display_file.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all:
	$(CC) $(CFLAG) -c $(MY_SOURCES) -o $(MY_OBJECTS)
	$(CC) $(CFLAG) -o $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)
