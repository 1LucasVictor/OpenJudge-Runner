#include <stdio.h>
int main(){
	int w,h,x,y,r,decid;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);

	if((x-r>=0) && (x+r<=w)){
		if((y-r>=0) && (y+r<=h)){
			decid=1;
		}
	}

	if(decid==1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}