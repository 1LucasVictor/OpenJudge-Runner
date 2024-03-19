#include <stdio.h>

int main(void) {
	int W, H, x, y, r;
	int f = 0;
	
	scanf("%d %d %d %d %d",&W, &H, &x, &y, &r);
	
	if(x - r < 0){
	    f = 1;
	}
	if(x + r > W){
	    f = 1;
	}
	if(y - r < 0){
	    f = 1;
	}
	if(y + r > H){
	    f = 1;
	}
	
	if(f == 0){
	    printf("Yes\n");
	}else{
	    printf("No\n");
	}
	
	return 0;
}

