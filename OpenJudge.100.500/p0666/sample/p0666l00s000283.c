#include<stdio.h>

int main(){
	int x,a,b;
	
	scanf("%d %d %d",&x,&a,&b);
	
	if(x < b - a){
		printf("dangerous\n");
	} else if(a >= b){
		printf("delicious\n");
	} else {
		printf("safe\n");
	}
	return 0;
}