obj=hello.o info.o
include hello.mk
VPATH=hellocfile:infocfile

%.o:%.c
	$(CC) -c -o $@ $< -I hfile
hello:$(obj)
	$(CC) -o $@ $(obj)

.PHONY:clean
clean:
	rm $(obj) hello
