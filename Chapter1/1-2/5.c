#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uninit(void)
{
	int a[5];
	a[0]=a[1]=a[2]=10;
	a[4]=a[0]+a[1]+a[2]+a[3];
	printf("a[4] is %d\n",a[4]);
	a[3]=0;
	a[2]=a[6];
	printf("a[2] is %d\n",a[2]);
}
void overcopy(void)
{
	char src[]="123456789";
	char dst[20];
	strcat(src,"abc");
	strcpy(src,dst);
}
void malloc_err(void)
{
	char *p1,*p2,*p3;
	p1 = (char*)malloc(10);
	p2 = p1;
	p3 = (char*)malloc(20);
	memset(p1,0,10);
	p1[10] = 5;
	free(p2);
	*p1 = 10;
	free(p1);
}
int main()
{
	uninit();
	overcopy();
	malloc_err();
	return 0;
}
