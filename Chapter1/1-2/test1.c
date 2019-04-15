#include<stdio.h>

int main(void)
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=5;k++)
		{
			printf("*");
			fflush(stdout);

		}
		printf("*");
		fflush(stdout);
		for(k=6;k<=11-i;k++)
		{
			printf("*");
		}
		for(j=11-i;j<=11;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
