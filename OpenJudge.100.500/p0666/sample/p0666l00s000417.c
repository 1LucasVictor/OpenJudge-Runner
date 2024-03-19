#include<stdio.h>
int main()
{
	int x,a,b,d;
	scanf("%d%d%d",&x,&a,&b);
	
	if((b-1)<a)puts("delicious");
	else if((b-1)<a+x)puts("safe");
	else puts("dangerous");
	
	return 0;
}