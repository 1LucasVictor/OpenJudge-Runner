#include <stdio.h>


int main(void) {
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	
	if( w>=(y+r) && h>=(x+r) ){
		printf("Yes\n");
	}else {
		printf("No\n");
	
	}
	
	return 0;
}