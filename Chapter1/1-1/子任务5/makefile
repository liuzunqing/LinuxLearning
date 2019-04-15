obj=hello.o info.o
CC=gcc
VPATH=./hellocfile:./infocfile

hello:$(obj)
	$(CC) -o $@ ./hellocfile/hello.o ./infocfile/info.o
hello.o:
	cd hellocfile && $(MAKE)
info.o:
	cd infocfile && $(MAKE)

.PHONY:clean
clean:
	rm ./hellocfile/hello.o ./infocfile/info.o  hello
