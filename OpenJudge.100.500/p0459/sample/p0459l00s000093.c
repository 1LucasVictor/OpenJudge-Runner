#include<stdio.h>

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	if(y < x * 2 || x * 4 < y){
		printf("No");
	} else if(y % 2 == 1){
		printf("No");
	} else {
		printf("Yes");
	}


	return 0;
}
