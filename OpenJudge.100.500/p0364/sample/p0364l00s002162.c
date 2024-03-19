#include<stdio.h>
int main(void){
int W,H,x,y,r;
	
	scanf("%d",&W);
	scanf("%d",&H);
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&r);
		
		if(W>=x+r && H>=y+r && 0<=x-r && 0<=y-r){
		printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		return 0;
	}