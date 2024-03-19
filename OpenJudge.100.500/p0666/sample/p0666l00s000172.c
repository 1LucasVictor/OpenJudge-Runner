#include <stdio.h>
int main(){
	int a,b,x;
	scanf("%d %d %d",&x,&a,&b);
	if (0-a+b>x)
		{
			printf("dengerous\n");
		}else if (0-a+b>0)
		{
			printf("safe\n");
		}else
		{
			printf("delicious\n");
		}
	return 0;
}