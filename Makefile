CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = pruebas
FILES = *.c *.h
OBJECTS = *.o
pruebas:
	$(CC) -c $(CFLAGS) $(FILES)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJECTS) 
