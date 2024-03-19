#include <stdio.h>

int main(){

	int W,H,x,y,r,result = 0;

	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

	if( (x - r > 0) && (x + r < W) && (y - r > 0) && (y + r < H) ){
		result = 1;
	}

	if (result == 1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}