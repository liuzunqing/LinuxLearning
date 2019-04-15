obj=hello.o info.o
include hello.mk

hello:$(obj)
	$(CC) -o $@ $(obj)
hello.o:info.h
info.o:info.h

.PHONY:clean
clean:
	rm $(obj) hello
