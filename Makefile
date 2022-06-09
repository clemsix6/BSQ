SRC =		$(wildcard *.c)
OBJ =		$(SRC:.c=.o)
DEBUG =		false
CFLAGS =	-W -Wall -Wextra -Werror -I./include
ifeq ($(DEBUG),true)
	CFLAGS += -g3 -ggdb
endif
LDFLAGS =	-L./lib/my -lmy
TARGET =	bsq


all: lib-make $(TARGET)
$(TARGET): $(OBJ)
	gcc -o $(TARGET) $(OBJ) $(LDFLAGS)

lib-make:
	make -C lib/my

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	make -C lib/my fclean
	rm -f $(TARGET)

re: fclean all