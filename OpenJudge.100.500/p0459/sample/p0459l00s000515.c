#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y;
	scanf("%d%d",&x,&y);
	if(y%2==0&&y<=x*4&&x*2<=y){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
