#include <stdio.h>
 
int main(void){
	int W,H,x,y,r;
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	if(x-1>=0 && x+1<= W){
		if(y+1>=0 && x+1<=H){
			printf("Yes\n");
		}
	}
	else{
		printf("No\n");
	}
	return 0;
}