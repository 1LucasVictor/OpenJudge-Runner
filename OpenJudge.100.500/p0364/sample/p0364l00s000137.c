#include<stdio.h>
int main(){
	int r,x,y,W,H;
	
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	if(0<x-r && 0<y-r){
		if(W>x+r && H>y+r) printf("Yes\n");
		else printf("No\n");
	}
	else printf("No\n");

	return 0;
}