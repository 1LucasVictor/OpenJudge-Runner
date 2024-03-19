#include <stdio.h>

int main(void) {
	int W,H,x,y,r,ans;
	
	
	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);
	
	if(W - (x+r) > 0 ){
		ans++;

	}
	if(H - (y+r) > 0 ){
		ans++;

	}
	if(ans == 2){
		printf("Yes\n");
		
	}
	else{
		printf("No\n");
	}
	return 0;
}