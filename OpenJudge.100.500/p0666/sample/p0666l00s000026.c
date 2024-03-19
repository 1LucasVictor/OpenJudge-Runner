#include <stdio.h>
int main(void){
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if(b-a<x+1){
		if(b-a<1){
			printf("delicious");
		}else{
			printf("safe");
		}
	}else{
		printf("dangerous");
	}
	return 0;
}