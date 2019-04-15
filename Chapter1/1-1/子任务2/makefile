obj=hello.o
CC=gcc
hello:$(obj)
	$(CC) -o hello $(obj)
hello.o:hello.h

.PHONY:clean
clean:
	rm $(obj) hello

