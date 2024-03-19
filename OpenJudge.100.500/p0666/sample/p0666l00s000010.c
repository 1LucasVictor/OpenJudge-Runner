#include<stdio.h>
int main()
{
	int x,a,b;
	x>=1;
	while(scanf("%d%d%d",&x,&a,&b)!=EOF)
	{
		if(a+b<=x)
		printf("delicious\n");
		
		else if(b-a>=x+1)
		printf("dangerous\n");
		else 
		printf("safe\n");
	}
}