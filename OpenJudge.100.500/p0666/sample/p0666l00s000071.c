#include<stdio.h>
int main()
{
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if(b<=a)
		printf("delicious\n");
	else if((x+a)>=b)
		printf("safe\n");
	else if((x+a)<=b)
		printf("dangerous\n");
}