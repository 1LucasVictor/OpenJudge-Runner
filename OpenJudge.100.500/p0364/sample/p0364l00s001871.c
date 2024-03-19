#include<stdio.h>

int main (void){

	int W,H,x,y,r;

	while(scanf("%d %d %d %d %d",&W,&H,&x,&y,&r) != EOF){

	if(x-r<0 || x+r>W || y-r<0 || y+r>H){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	}
return 0;
}