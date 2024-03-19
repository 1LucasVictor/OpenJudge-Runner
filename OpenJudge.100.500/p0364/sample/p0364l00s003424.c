#include <stdio.h>
int main(void){
	
	int W,H,x,y,r;
	
	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);
	
	if((x+r)<W){
		if((x-r)>0){
			if((y+r)<H){
				if((y-r)>0){
					
					printf("Yes\n");
				}
			}
		}
	}
	
	else{
		printf("No\n");
	}
	
	return 0;
}