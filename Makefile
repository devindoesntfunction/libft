ALL = libft.a

SRCS = $(wildcard ft_*/*.c)

OBJS = $(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror

$(ALL): $(OBJS)
	ar -rcs $@ $?

%.o: %.c
	$(CC) -c -o $@ $<

test:
	echo $(OBJS)

clean:
	rm */*.o
