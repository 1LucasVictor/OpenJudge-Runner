#include <stdio.h>
int main(){
	int a,b,x,y;
	scanf("%d %d %d",&x,&a,&b);
	y=a+x;
	if (a>=b)
	{
		printf("delicious\n");
	}else if (a<b)
	{
		if (y>b)
		{
			printf("safe\n");
		}else if (y<=b)
		{
			printf("dengerous\n");
		}
	}
}