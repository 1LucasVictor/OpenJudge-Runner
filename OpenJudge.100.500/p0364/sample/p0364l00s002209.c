#include <stdio.h>

int main(void)
{
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	
	if(x-r < 0 || y-r < 0 || w-x-r < 0 || h-y-r < 0 || x < 0 || y < 0){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	return 0;
	}
}