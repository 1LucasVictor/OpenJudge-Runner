#include<stdio.h>
int main(){
	int x, y;
	scanf("%d %d",&x, &y);
	if ( x > 0 && x <= 8 && y > 0 && y <= 8){
		printf("Yay!");
	}else{
		printf(":(");
	}
	return 0;
}