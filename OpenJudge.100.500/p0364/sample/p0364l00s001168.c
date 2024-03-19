#include <stdio.h>

int main(void) {
	
	int w,h,x,y,r;
	int temp;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	
	if((x < 0) || (y < 0)){
		printf("No\n");
		return 0;
	}
	if((w - (x + r) < 0) || ((x - r) < 0)){
		printf("No\n");
		return 0;
	}
	if((h - (y + r) < 0) || ((y - r) < 0)){
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	return 0;
}

