#include<stdio.h>

int w;
int h;
int x;
int y;
int r;

int main(void){
	
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	
	if(x + r <w && x - r > 0)
		 if(y + r < h && y - r > 0)
			printf("Yes\n");
		else
			printf("No\n");
		
	
	return 0;
}