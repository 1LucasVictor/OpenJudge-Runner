#include<stdio.h>
int main (){
	int W,H,x,y,r;
	scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
	if(-100<=x,y<=100 && 0<W,H,r<=100){
		if(W<x+r){
		printf("No\n");
		}else if(H<y+r){
		printf("No\n");
		}else if(0>x+r){
		printf("No\n");
		}else if(0>y+r){
		printf("No\n");
		}else{
		printf("Yes\n");
		}
	}else{
	printf("NOT\n");
	}
	return 0;
}