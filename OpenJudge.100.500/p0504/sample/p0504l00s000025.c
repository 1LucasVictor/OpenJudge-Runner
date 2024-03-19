#include <stdio.h>

int main(void)
{
	int h,a,n=1;

	scanf("%d%d",&h,&a);
	
	n += h / (float)a;

 	printf("%d\n",n);
	return 0;
}
