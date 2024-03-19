#include<stdio.h>
int main(){
  int W,H,x,y,r;
	
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	if(W < x){
	
		printf("No\n");
	
	}
	else if(W < x+r){
	
		printf("No\n");
	
	}
	else if(H < y){
	
		printf("No\n");
	
	}
	
	else if(H < y+r){
	
		printf("No\n");
	
	}
	
	else if(x-r < 0){
	
		printf("No\n");
	
	}
	
	else if(y-r <= 0){
	
		printf("No\n");
	
	}
	
	else printf("Yes\n");
	
	
	return 0;
}