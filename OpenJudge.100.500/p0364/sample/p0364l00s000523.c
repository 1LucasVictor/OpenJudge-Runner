#include<stdio.h>

int main(void){
	
	int W,H,x,y,r;
	int ue,sita,migi,hidari;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	
	ue = y+r;
	sita = y-r;
	migi = x+r;
	hidari = x-r;
	
	if((ue>H)||(sita<0)||(migi>W)||(hidari<0)){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
	
	
	
	
	return 0;
	
}