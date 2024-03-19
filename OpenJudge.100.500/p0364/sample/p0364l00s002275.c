#include<stdio.h>

int main(void){

int W,H,x,y,r;

scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(-100<=x<=100||-100<=y<=100||0<W<=100||0<H<=100||0<r<=100){
	if(x>0||y>0){
	if(W-x>=r||x>=r||H-y>=r||y>=r){
		printf("Yes\n");
	}
	}
	}	
	else{
		printf("No\n");
	}
return 0;

}