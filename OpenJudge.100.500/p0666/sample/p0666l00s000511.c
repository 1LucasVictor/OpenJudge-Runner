#include <stdio.h>
int main(){
	int a,b,h,x;
	scanf("%d %d %d",&x,&a,&b);
	if (a>=b)
		{
			printf("delicious\n");
		}else if (a<b)
		{
			h=a+x;
			if (h>=b)
			{
				printf("safe\n");
			}else if (h<b)
			{
				printf("dengerous\n");
			}
		}
	return 0;
}