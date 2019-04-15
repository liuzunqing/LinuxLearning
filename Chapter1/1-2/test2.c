#include<stdio.h>
#include<stdlib.h>

int main(void){
	setenv("MALLOC_TRACE","test2.log",1);
	mtrace();
	int *p=NULL;
	p=(int *)malloc(4);
    return 0;
}
